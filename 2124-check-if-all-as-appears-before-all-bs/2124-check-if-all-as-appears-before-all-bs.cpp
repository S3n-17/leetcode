class Solution {
public:
    bool checkString(string s) {
        int i;
        int sz=size(s);
        vector<int> ia;
        vector<int> ib;
        for(i=0;i<sz;i++){
            if(s[i]=='a'){
                ia.push_back(i);
            }
            else{
                ib.push_back(i);
            }
        }
        sort(ia.begin(),ia.end());
        sort(ib.begin(),ib.end());
        if(size(ia)!=0 && size(ib)!=0){
            if(ia[size(ia)-1]>ib[0]){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            return true;
        }
        
    }
};