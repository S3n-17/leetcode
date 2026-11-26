class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int sr=size(ransomNote);
        int sm=size(magazine);
        int i;
        unordered_map<char,int> hr;
        unordered_map<char,int> hm;
        if(sr<=sm){
            for(i=0;i<sr;i++){
                hr[ransomNote[i]]++;
            }
            for(i=0;i<sm;i++){
                hm[magazine[i]]++;
            }
            for ( auto x : hr){
                if(hr[x.first]>hm[x.first]){
                    return false;
                }
            }
            return true;
        }
        else{
            return false;
        }
    }
};