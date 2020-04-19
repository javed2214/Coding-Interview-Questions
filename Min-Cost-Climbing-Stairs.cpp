// Minimum Cost Climbing Stairs - LeetCode
// https://leetcode.com/problems/min-cost-climbing-stairs/

// Time: O(n)  Space: O(n)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        vector<int> dp(n, 0);
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i=2;i<n;i++)
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        
        return min(dp[n-1], dp[n-2]);
    }
};


// Time: O(n)  Space: O(1)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        for(int i=2;i<n;i++) cost[i] += min(cost[i-1], cost[i-2]);
        return min(cost[n-1], cost[n-2]);
    }
};