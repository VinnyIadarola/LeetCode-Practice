class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 10001;
        int max_profit = 0;

        for(size_t i = 0; i != prices.size(); ++i) {
            if(min_price > prices[i])
                min_price = prices[i];
            else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            } 
        }

        return max_profit;
    }
};