class Solution {
public:
    bool canJump(vector<int>& nums) {
        int s = nums.size();
        vector<int> dp(s, -1);

        return func(0, s - 1, nums, dp);
    }

    bool func(int k, int i, vector<int>& nums, vector<int>& dp) {
        if(k >= i){
            return true;
        }

        if(dp[k] != -1){
            return dp[k];
        }

        int end = min(i, k + nums[k]);

        for(int h = k + 1; h <= end; h++){
            if(func(h, i, nums, dp)){
                return dp[k] = true;
            }
        }

        return dp[k] = false;
    }
};