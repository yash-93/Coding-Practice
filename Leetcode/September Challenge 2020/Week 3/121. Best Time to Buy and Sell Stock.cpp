class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0 or prices.size()==1) return 0;
        int buy,profit=INT_MIN;
        buy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }else{
                profit=max(profit,prices[i]-buy);
            }
        }
        return profit==INT_MIN? 0 : profit;
    }
};