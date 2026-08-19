class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i,k,j,s;
        int c=0;
        vector<int> res(nums.size());
        if((nums[0]<0 and nums[nums.size()-1]<0) or (nums[0]>=0 and nums[nums.size()-1]>=0)){
            if(nums[0]>=0 and nums[nums.size()-1]>=0){
                for(i=0;i<nums.size();i++){
                    nums[i]=nums[i]*nums[i];
                }
                return nums;
            }
            else{
                for(i=nums.size()-1;i>=0;i--){
                    res[c]=nums[i]*nums[i];
                    c++;
                    
                }
                return res;
            }

            
        }
        else{
            for(i=0;i<nums.size();i++){
                if(nums[i]==0 or nums[i]>0){
                    k=i;
                    s=k-1;
                    j=k;
                    break;
                }
            }
            i=0;
            while(s>=0 and j<nums.size()){
                if(abs(nums[s])<abs(nums[j])){
                    res[i]=nums[s];
                    s--;
                    i++;
                }
                else{
                    res[i]=nums[j];
                    j++;
                    i++;
                }
            }
            while(s>=0 ){
                res[i]=nums[s];
                s--;
                i++;
            }
            while(j<nums.size()){
                res[i]=nums[j];
                j++;
                i++;
            }
        }
        for(i=0;i<res.size();i++){
            res[i]=res[i]*res[i];
        }
        return res;
        
    }
};