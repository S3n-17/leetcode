class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0; i<size(nums)-1; i++){
            if(nums[i+1]==nums[i]){
                return true;
            }
        }
        return false;
    }
};