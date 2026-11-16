class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0, j=0, flag=0, c=0, res;
        int n=size(nums);
        vector<int> track;
        while(i<n){
            while(j<size(track)){
                flag=0;
                if(track[j]==nums[i]){
                    flag=1;
                    break;
                }
                j++;
            }
            if(flag==0){
                c=count(nums.begin(), nums.end(), nums[i]);
                track.push_back(nums[i]);
                if(c>n/2){
                    res=nums[i];
                    break;
                }
            }
            
            i++;
        }
        return res;
    }
};