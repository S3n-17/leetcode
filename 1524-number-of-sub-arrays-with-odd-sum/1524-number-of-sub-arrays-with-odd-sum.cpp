class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int i, sum=0;
        long long int c;
        long long int odd=0, even=0;
        int s=size(arr);
        vector<int> sums;
        sums.push_back(sum);
        for(i=0;i<s;i++){
            sum+=arr[i];
            sums.push_back(sum);
        }
        for(i=0;i<size(sums);i++){
            if(sums[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        c=(odd*even)%1000000007;

        return c;
    }
};