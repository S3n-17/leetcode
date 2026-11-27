
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        vector<int> sz;
        string str="";
        while(c<size(s) && s[c]!='\0'){
            while(c<size(s) && s[c]!=' '){
                str+=s[c];
                c++;
            }
            if(size(str)>0){
                sz.push_back(size(str));
                str="";
            }
            c++;
        }
        return sz[size(sz)-1];
    }
};
