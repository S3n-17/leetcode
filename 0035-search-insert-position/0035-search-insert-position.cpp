class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans,mid,flag=0;
        int high=nums.size()-1,low=0;
        while(high>=low){
            mid=(high+low)/2;
            if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                ans=mid;
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            ans=low;

        }
        return ans;
    }
    
};