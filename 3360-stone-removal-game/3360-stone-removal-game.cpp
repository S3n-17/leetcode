class Solution {
public:
    bool canAliceWin(int n) {
        int c=n;
        int a=10;
        int flag=0;
        int b=9;
        while(n>0){
            if(flag==0){
                if(a<=n){
                    n-=a;
                    a-=2;
                    flag=1;
                }
                else{
                    return false;
                }
            }
            else{
                if(b<=n){
                    n-=b;
                    b-=2;
                    flag=0;
                }
                else{
                    return true;
                }
            }
        }
        if(flag==0){
            return false;
        }
        else{
            return true;
        }
    }
};