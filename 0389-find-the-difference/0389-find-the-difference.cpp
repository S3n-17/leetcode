class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i;
        char res;
        int sz=size(t);
        for(i=0;i<sz;i++){
            if(i<sz-1){
                if(s[i]!=t[i]){
                    res= t[i];
                    break;
                }
                
            }
            else if(i==sz-1){
                res= t[i];
            }
            
        }
        return res;
    }
};