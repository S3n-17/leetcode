class Solution {
public:
    bool isAnagram(string s, string t) {
        int i,flag=0;
        vector<int> f1;
        vector<int> f2;
        if(s.length()==t.length()){
            for(i=0;s[i]!='\0';i++){
                f1.push_back(s[i]);
                
            }
            for(i=0;t[i]!='\0';i++){
                f2.push_back(t[i]);
            }
            sort(f1.begin(), f1.end());
            sort(f2.begin(), f2.end());
            for(i=0;i<f1.size();i++){
                if(f1[i]!=f2[i]){
                    flag=1;
                    break;
                }
                
            }
            if(flag==0){
                return true;
            }
            else{
                return false;
            }
            
        }
        else{
            return false;
        }
        return 0;
    }
};