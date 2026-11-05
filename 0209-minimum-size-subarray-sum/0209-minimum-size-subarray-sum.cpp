class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, sum = 0;
        int res = INT_MAX;
        int s = nums.size();

        for (int j = 0; j < s; j++) {
            sum += nums[j];

            while (sum >= target) {
                res = min(res, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }

        return res == INT_MAX ? 0 : res;
    }
};