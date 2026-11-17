class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int i, k=1, l=0;
        int s = size(nums);
        int sum, flag=0, res=1;

        int inc=1, dec=1;

        for(i=1; i<s; i++) {
            if(nums[i]>nums[i-1]) {
                inc++;
            }
            else {
                inc=1;
            }

            if(nums[i]<nums[i-1]) {
                dec++;
            }
            else {
                dec=1;
            }

            res=max(res,max(inc,dec));
        }

        return res;
    }
};