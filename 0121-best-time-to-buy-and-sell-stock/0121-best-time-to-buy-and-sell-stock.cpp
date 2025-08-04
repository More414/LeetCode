class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        int buy_price=prices[0];

        for(int i=1;i<n; i++){

            int curr_profit=prices[i]-buy_price;

            if(curr_profit>max_profit)
                max_profit=curr_profit;
            if(prices[i]<buy_price)
                buy_price=prices[i];
        }
        return max_profit;
    }
};