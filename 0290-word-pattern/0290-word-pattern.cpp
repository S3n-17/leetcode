class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<int> pv;
        vector<int> sv;
        unordered_map<char,int> mpp;
        unordered_map<string,int> mps;

        string str="";
        int i, sp=size(pattern), ss=size(s);
        int c=0,m=0;

        for(i=0;i<sp;i++){
            if(!mpp.count(pattern[i])){
                mpp[pattern[i]]=c;
                c++;
            }
            pv.push_back(mpp[pattern[i]]);
        }

        i=0;
        while(i<ss){
            while(i<ss && s[i]!=' '){
                str+=s[i];
                i++;
            }

            if(!mps.count(str)){
                mps[str]=m;
                m++;
            }

            sv.push_back(mps[str]);
            str="";
            i++;
        }

        if(size(pv)!=size(sv)){
            return false;
        }

        for(i=0;i<size(pv);i++){
            if(pv[i]!=sv[i]){
                return false;
            }
        }

        return true;
    }
};