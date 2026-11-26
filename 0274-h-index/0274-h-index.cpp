class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i, s=size(citations), res=0;
        sort(citations.rbegin(),citations.rend());
        for(i=1;i<=s;i++){
            if(citations[i-1]>=i){
                if(i==s){
                    res=i;
                }
            }
            else{
                res=i-1;
                break;
            }

        }
        return res;
    }
};