class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0=count(nums.begin(),nums.end(),0);
        int n1=count(nums.begin(),nums.end(),1);
        int n2=count(nums.begin(),nums.end(),2);
        nums.clear();
        for(int i=0;i<n0;i++){
            nums.push_back(0);
        }
        for(int i=0;i<n1;i++){
            nums.push_back(1);
        }
        for(int i=0;i<n2;i++){
            nums.push_back(2);
        }
    }
};