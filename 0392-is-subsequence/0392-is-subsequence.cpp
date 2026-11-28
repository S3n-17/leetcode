class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i, ss=size(s), st=size(t), ind;
        vector<int> is;
        vector<int> it;
        int left=0;
        for(i=0;i<ss;i++){
            is.push_back(i);
        }
        if(st<ss){
            return false;
        }
        i=0;
        while(i<ss && left<st){
            auto pos = find(t.begin()+left,t.end(),s[i]);
            if(pos==t.end()){
                return false;
            }
            ind = pos - t.begin();
            left=ind+1;
            it.push_back(ind);
            i++;
        }
        for(i=1;i<size(it);i++){
            if(it[i]-it[i-1]<0){
                return false;
            }

        }
        return it.size()==ss;
    }
};