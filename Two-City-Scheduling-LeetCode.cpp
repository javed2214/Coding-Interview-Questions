// Two City Scheduling - LeetCode
// https://leetcode.com/problems/two-city-scheduling/
// https://www.youtube.com/watch?v=vtNoP43hGJA

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue<pair<int, int>> pq;
        int n = costs.size();
        for(int i = 0; i < costs.size(); i++){
            int x = costs[i][0];
            int y = costs[i][1];
            pq.push({y-x, i});
        }
        int x = 1, sum = 0;
        
        while(!pq.empty()){
            x <= (n/2) ? sum += costs[pq.top().second][0] : sum += costs[pq.top().second][1];
            x += 1;
            pq.pop();
        }
        return sum;
    }
};