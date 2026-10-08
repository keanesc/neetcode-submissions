class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, profit = 0;

        for (int right = 0; right < prices.size(); right++) {
            int low = prices[left];
            int high = prices[right];

            profit = max(profit, high - low);

            if (high < low) left = right;
        }

        return profit;
    }
};
