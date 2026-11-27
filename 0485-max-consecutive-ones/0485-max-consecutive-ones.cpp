class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,i=0;
        int c;
        int s=size(nums);
        while(i<s){
            c=0;
            if(nums[i]==1){
                while(i<s && nums[i]!=0 ){
                    c++;
                    i++;
                }
                if(c>res){
                    res=c;
                }
            }
            else{
                i++;
            }
        }
        return res;
    }
};