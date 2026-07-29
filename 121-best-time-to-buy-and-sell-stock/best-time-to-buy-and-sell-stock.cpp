class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minprofit = prices[0];
        int maxprofit = 0;
        for(int i=1; i<n; i++){
            maxprofit = max(maxprofit, prices[i] - minprofit);

            minprofit = min(minprofit, prices[i]);
        }
        return maxprofit;
    }
};