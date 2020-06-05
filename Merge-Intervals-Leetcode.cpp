// Merge Intervals LeetCode
// https://leetcode.com/problems/merge-intervals/
// https://www.youtube.com/watch?v=QlaDyZTCAbM

// Time  : O(nLog(n))
// Space : O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        if(v.size() == 0) return {};
        
        sort(v.begin(), v.end());
        stack <pair<int, int>> s;
        
        s.push({v[0][0], v[0][1]});     // Pushing First Interval
        
        for(int i = 1; i < v.size(); i++){
           
            int x = v[i][0];
            int y = v[i][1];
            
            if(x > s.top().second) s.push({x, y});      // Overlap Check
            s.top().second = max(s.top().second, y);
        }
        
        vector<vector<int>> x;
        
        while(!s.empty()){
            x.push_back({s.top().first, s.top().second});
            s.pop();
        }
        return x;
    }
};
