class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> expectedNums;
        int i,j=0,k,l=nums.size();
        for(i=0;i<l;i++){
            if(nums[i]!=val){
                expectedNums.push_back(nums[i]);
                j++;
            }
        }
        k=expectedNums.size();
        for(i=0;i<k;i++){
            nums[i]=expectedNums[i];
        }
        return k;
    }
    
};