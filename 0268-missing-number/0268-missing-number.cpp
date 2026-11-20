class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,res;
        int n = size(nums);
        sort(nums.begin(),nums.end());
        if(nums[0]!=0 || nums[n-1]!=n){
            res = nums[0]!=0?0:n;
        }
        else{
            for(i=0;i<size(nums)-1;i++){
                if(nums[i+1]!=nums[i]+1){
                    res= nums[i]+1;
                    break;
                } 
            
            }
        }
        
        return res;
    }
};