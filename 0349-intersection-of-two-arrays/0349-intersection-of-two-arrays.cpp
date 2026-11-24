class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i,c;
        vector<int> res;
        for(i=0;i<size(nums1);i++){
            if((count(nums2.begin(),nums2.end(),nums1[i])>0) && count(res.begin(),res.end(),nums1[i])==0){
                res.push_back(nums1[i]);
            }
        }
        return res;
    }
};