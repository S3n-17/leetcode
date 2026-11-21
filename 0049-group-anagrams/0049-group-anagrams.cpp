class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i, j;
        vector<vector<string>> res;
        vector<string> copy;
        vector<int> indices;
        vector<string> resarr;
        int s = size(strs);
        for(i=0;i<s;i++){
            copy.push_back(strs[i]);
            indices.push_back(1);
        }
        for(i=0;i<s;i++){
            sort(copy[i].begin(),copy[i].end());
        }
        for(i=0;i<s;i++){
            if(indices[i]==1){
                resarr.push_back(strs[i]);
                j=i+1;
                while(j<size(copy)){
                    if(indices[j]==1 && copy[j]==copy[i]){
                        resarr.push_back(strs[j]);
                        indices[j]=0;
                    }
                    j++;
                }
                
                res.push_back(resarr);
                resarr.clear();
            }
            
            
        }
        return res;
    }
};