// Merge Intervals LeetCode
// https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        if(v.size() == 0) return {};
        
        sort(v.begin(), v.end());
        
        vector<pair<int,int>> x;
        vector<vector<int>> y;
        
        for(int i=0;i<v.size();i++) x.push_back({v[i][0], v[i][1]});
        
        stack <pair<int,int>> S;
        
        for(auto it:x){
            if(S.empty() or S.top().second < it.first) S.push(it);
            if(S.top().second < it.second) S.top().second = it.second;
        }

        while(!S.empty()){
            pair <int,int> P = S.top();
            int a = P.first;
            int b = P.second;
            y.push_back({a,b});
            S.pop();
        }
        
        reverse(y.begin(), y.end());
        
        return y;
    }
};