class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=numbers.size();
        int i=0, j=l-1; 
        vector<int> res;
        while(j>i){
            if(numbers[i]+numbers[j]==target){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            else if (numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
            
        }
        return res;
    }
};