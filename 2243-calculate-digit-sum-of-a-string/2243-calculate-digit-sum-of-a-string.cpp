class Solution {
public:
    string digitSum(string s, int k) {
        int i, l = size(s), c=0;
        int g = l;
        int r = l%k;
        int sum =0 ;
        string res;
        while(g>k){
            res = "";
            c = 0;
            sum = 0;
            for(i=0;i<l;i++){
                if(c<k){
                    sum+= s[i] - '0';
                    c++;
                }
                else{
                    c=0;
                    res+=to_string(sum);
                    sum=0;
                    sum+= s[i] - '0';
                    c++;
                }
            }
            res += to_string(sum);
            s = res;
            l = size(s);
            g = l;
        }
        
        if(size(res)>0){
            return res;
        }
        else{
            return s;
        }
    }
};