class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> expectedNums;
        int i;
        for(i=0;i<nums.size();i++){
            if(count(expectedNums.begin(),expectedNums.end(),nums[i])==0){
                expectedNums.push_back(nums[i]);
            }
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        int k=expectedNums.size();
        return k;
    }
       
};