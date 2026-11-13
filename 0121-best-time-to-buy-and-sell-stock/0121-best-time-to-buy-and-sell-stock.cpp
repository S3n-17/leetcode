class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, s = prices.size();
        int d, profit = 0;
        int sm = prices[0];

        for(i = 1; i < s; i++) {
            d = prices[i] - sm;

            if(d > profit) {
                profit = d;
            }

            if(prices[i] < sm) {
                sm = prices[i];
            }
        }

        return profit;
    }
};