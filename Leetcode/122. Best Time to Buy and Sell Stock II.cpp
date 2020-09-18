class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        if(n == 0 || n == 1)
            return 0;
        
        int profit = 0;
        int lowest_price = prices[0];
        int temp_profit = 0;
        
        for(int i=1; i<n; i++){
            if(prices[i] < prices[i-1]){
                profit += temp_profit;
                lowest_price = prices[i];
                temp_profit = 0;
            }else{
                temp_profit = max(temp_profit, prices[i] - lowest_price);
            }
        }
        
        return profit+temp_profit;
    }
};