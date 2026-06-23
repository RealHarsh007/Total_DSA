class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n = price.size();

        int bbuy = price[0], maxprof = 0;

        for (int i = 0; i < n; i++) {
            if (price[i] < bbuy) {
                bbuy = min(bbuy, price[i]);
            }
            if (price[i] > bbuy) {
                maxprof = max(maxprof, price[i] - bbuy);
            }
        }
        return maxprof;
    }
};