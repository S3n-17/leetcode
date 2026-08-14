class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int i,j=0,flag=0;
        s="";
        while(j<strs[0].size()){
            for(i=1;i<strs.size();i++){
                if(strs[0][j]!=strs[i][j]){
                    flag=1;
                }
            }
            if(flag==0){
                s+=strs[0][j];
            }
            else{
                return s;
            }
            j++;
        }
        return s;
    }
        
};