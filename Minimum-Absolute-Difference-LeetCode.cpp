// Minimum Absolute Difference - LeetCode
// https://leetcode.com/problems/minimum-absolute-difference/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        
        sort(a.begin(), a.end());
        
        int mi = INT_MAX;
        
        vector<vector<int>> res;
        
        for(int i=1;i<a.size();i++){
        
            if(a[i] - a[i-1] == mi) res.push_back({a[i-1],a[i]});
        
            else if(a[i] - a[i-1] < mi){
                
                res = {{a[i-1],a[i]}};
                mi = a[i] - a[i-1];
            }
        }
        
        return res;
    }
};