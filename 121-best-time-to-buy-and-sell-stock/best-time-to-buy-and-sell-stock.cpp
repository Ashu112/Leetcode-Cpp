class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // brute force O(n*n)
         int n = prices.size();
        // int maxProfit = INT_MIN;
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i+1; j < n ; j++){
        //         int profit = prices[j]- prices[i];
        //         maxProfit = max(maxProfit,profit);
        //     }
        // }
        // return maxProfit<0 ? 0 : maxProfit;

        // Greedy approach O(n)
        // one state for finding min price
        // one state for tracking maximum profit
        int maxProfit = 0;
        int minPrice = prices[0];
        for(int i = 1 ; i < n ; i++){
            int profit = prices[i] - minPrice;
            maxProfit = max(profit, maxProfit);
            minPrice = min(prices[i],minPrice);
        }
        return maxProfit;
    }
};