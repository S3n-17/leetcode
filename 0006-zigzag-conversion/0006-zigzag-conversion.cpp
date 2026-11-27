
class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> store(numRows);
        int c=0, ind=0, sz=size(s),i,j;
        string str="";
        if(numRows==1 || numRows>=sz){
            return s;
        }
        while(ind<sz){
            while(c<numRows && ind<sz){
                store[c].push_back(s[ind]);
                c++;
                ind++;
            }
            c-=2;
            while(c>0 && ind<sz){
                store[c].push_back(s[ind]);
                ind++;
                c--;
            }
            c=0;
        }
        for(i=0;i<numRows;i++){
            for(j=0;j<size(store[i]);j++){
                str+=store[i][j];
            }
        }
        return str;
    }
};
