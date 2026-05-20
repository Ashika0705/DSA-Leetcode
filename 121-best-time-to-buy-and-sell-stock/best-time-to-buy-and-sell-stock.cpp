class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=0;
        int profit;
        for(int i=0; i< prices.size() ; i++){

            
            if(prices[i]<minPrice){
                minPrice= prices[i];

            }
            profit=prices[i]- minPrice;
            maxProfit=max(profit, maxProfit);
        }
        return maxProfit;
    }
};