class Solution {
public:
    bool isHappy(int n) {
        int s=0;
        int c=n;
        vector<int> store;
        while(c!=1){
            s=0;
            while(c){
                s+= pow((c%10),2);
                c=c/10;
            }
            c=s;
            if(count(store.begin(),store.end(),s)){
                return false;
            }
            store.push_back(s);
        }
        return true;
    }
};