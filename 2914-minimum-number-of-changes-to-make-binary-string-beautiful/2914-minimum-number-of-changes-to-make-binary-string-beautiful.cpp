class Solution {
public:
    int minChanges(string s) {
        int d=2;
        int chan=0;
        int c1,c0;
        while(d<=size(s)){
            c0=count(s.begin()+d-2, s.begin()+d, '0');
            c1=count(s.begin()+d-2, s.begin()+d, '1');
            if(c1<c0){
                // replace(s.begin(), s.end(), '1', '0');
                chan+=c1;
            }
            else if(c0<c1){
                // replace(s.begin(), s.end(), '0', '1');
                chan+=c0;
            }
            else if(c0==0 || c1==0){
                continue;
            }
            else{
                // replace(s.begin(), s.end(), '1', '0');
                chan+=c1;
            }
            d+=2;
        }
        return chan;
    }
};