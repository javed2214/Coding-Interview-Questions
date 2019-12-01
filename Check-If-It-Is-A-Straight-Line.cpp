// Check If It is A Straight Line - LeetCode
// https://leetcode.com/problems/check-if-it-is-a-straight-line/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        
        if(v.size() < 3) return true;
        
        for(int i=2;i<v.size();i++){
            
            int y2 = v[i][1] - v[i-1][1];
            int y1 = v[i-1][1] - v[i-2][1];
            int x2 = v[i][0] - v[i-1][0];
            int x1 = v[i-1][0] - v[i-2][0];
            
            if(y2 * x1 != y1 * x2) return false;
        }
        return true;
    }
};