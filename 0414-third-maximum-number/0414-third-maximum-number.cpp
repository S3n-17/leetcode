class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n;
        int i;
        vector<int> copy;
        for(i=0;i<size(nums);i++){
            if(count(copy.begin(),copy.end(),nums[i])==0){
                copy.push_back(nums[i]);
            }
        }
        sort(copy.begin(),copy.end());
        if(size(copy)<3){
            n= *max_element(copy.begin(),copy.end());
        }
        else{
            n = copy[size(copy)-3];
        }
        
        return n;
    }
};