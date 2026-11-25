class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        int i,j,s=size(nums);
        string res;
        char c;

        for(i=0;i<s;i++){
            string a=to_string(nums[i]);
            str.push_back(a);
        }

        vector<vector<string>> order(10);

        for(i=0;i<s;i++){
            c=str[i][0];
            switch(c){
                case '0': order[0].push_back(str[i]); break;
                case '1': order[1].push_back(str[i]); break;
                case '2': order[2].push_back(str[i]); break;
                case '3': order[3].push_back(str[i]); break;
                case '4': order[4].push_back(str[i]); break;
                case '5': order[5].push_back(str[i]); break;
                case '6': order[6].push_back(str[i]); break;
                case '7': order[7].push_back(str[i]); break;
                case '8': order[8].push_back(str[i]); break;
                case '9': order[9].push_back(str[i]); break;
                default: break;
            }
        }

        for(i=9;i>=0;i--){
            if(size(order[i])>0){
                sort(order[i].begin(),order[i].end(),
                [](string a,string b){
                    return a+b > b+a;
                });

                for(j=0;j<size(order[i]);j++){
                    res+=order[i][j];
                }
            }
        }

        if(res[0]=='0') return "0";

        return res;
    }
};