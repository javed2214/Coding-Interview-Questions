// Length of Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
   
    int lengthOfLongestSubstring(string s){

    	if(s.length() == 0) return 0;
    	unordered_map <char, int> Map;

    	int start = 0, mx = -1;

    	for(int i=0;i<s.length();i++){
    		if(Map.find(s[i]) != Map.end() and Map[s[i]] >= start)
    			start = Map[s[i]] + 1;
    		Map[s[i]] = i;
    		mx = max(mx, i - start + 1);
    	}
        return mx;
    }
};
