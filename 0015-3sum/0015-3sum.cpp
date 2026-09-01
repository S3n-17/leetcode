class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> store;
        int i,j,n,l,r,s;
        sort(nums.begin(), nums.end());
        n=nums.size();
        for(i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            s=-nums[i];
            l=i+1;
            r=n-1;
            while(r>l){
                
                if(nums[l]+nums[r]==s){
                    store.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1])
                        l++;

                    while(l < r && nums[r] == nums[r + 1])
                        r--;
                }
                else if(nums[l]+nums[r]>s){
                    r--;
                }
                else{
                    l++;
                }
                
            }    
            
        }
        return store;
    }
};