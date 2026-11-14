class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int i, s = l, d, j;
        int sz = nums.size();
        int sum, fsum = INT_MAX;

        while (s <= r && s <= sz) {
            sum = 0;

            for (i = 0; i < s; i++) {
                sum += nums[i];
            }

            if (sum > 0 && sum < fsum) {
                fsum = sum;
            }

            for (i = 1; i + s <= sz; i++) {
                sum = sum - nums[i-1] + nums[i+s-1];

                if (sum > 0 && sum < fsum) {
                    fsum = sum;
                }
            }

            s++;
        }

        if (fsum == INT_MAX) {
            return -1;
        }
        else {
            return fsum;
        }
    }
};