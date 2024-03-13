#include <vector>
#include <climits>
using namespace std;

class Solution{
    public:
        int maxProfit(vector<int>& prices) { // [1,6,7,3,1]
            int n = prices.size();
            int max_profit = 0;
            int min_price = INT_MAX;

            for(int i = 0; i < n; i++) {
                if(prices[i] < min_price) { // 1 < INT_MAX, 6 < 1, 7 < 1, 3 < 1
                    min_price = prices[i]; // cache the minimum price

                } else if(prices[i] - min_price > max_profit) { // 0 > 0, 5 > 0, 6 > 5, 2 > 5
                    max_profit = prices[i] - min_price; // cache the maximum profit
                }
            }

            return max_profit;
        }
};