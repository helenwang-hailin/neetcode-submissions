class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> total(n);
        total[0] = cost[0];
        total[1] = cost[1];
        for (int i = 2; i < n; ++i) {
            total[i] = cost[i] + min(total[i-1], total[i-2]);
        }
        return min(total[n-1], total[n-2]);
    }
};
