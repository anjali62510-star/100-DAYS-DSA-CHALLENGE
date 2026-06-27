#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {

        if (prices.empty()) return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        for (size_t i = 1; i < prices.size(); ++i) {
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};