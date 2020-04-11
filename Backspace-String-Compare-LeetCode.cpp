// BackSpace String Compare - LeetCode
// https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        string t1, t2;
        
        for(auto it:S){
            if(it != '#') t1 += it;
            else if(t1.length() >= 1) t1.pop_back();
        }
        
        for(auto it:T){
            if(it != '#') t2 += it;
            else if(t2.length() >= 1) t2.pop_back();
        }
        
        return (t1 == t2);
    }
};