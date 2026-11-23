class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,diff=0;
        int s=size(nums);
        if(s<2){
            return 0;
        }
        for(i=1;i<s;i++){
            if(nums[i]-nums[i-1]>diff){
                diff=nums[i]-nums[i-1];
            }
        }
        return diff;
    }
};