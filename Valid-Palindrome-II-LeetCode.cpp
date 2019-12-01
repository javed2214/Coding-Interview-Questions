// Valid Palindrome - II  [LeetCode]
// https://leetcode.com/problems/valid-palindrome-ii/
// https://leetcode.com/problems/valid-palindrome-ii/discuss/119188/C%2B%2B-Easy-to-Understand-Clear-Explaination

class Solution{
public:
    bool validPalindrome(string s){

    	int l = 0, r = s.size() - 1;

    	while(l <= r){

    		if(s[l] == s[r]){

    			++l;
    			--r;
    		}
    		else{

    			int ll = l + 1, lr = r;

    			while(ll <= lr and s[ll] == s[lr]){

    				++ll;
    				--lr;
    			}
    			if(ll >= lr) return true;

    			int rl = l, rr = r - 1;

    			while(rl <= rr and s[rl] == s[rr]){

    				++rl;
    				--rr;
    			}
    			if(rl >= rr) return true;

    			return false;
    		}
    	}
    	return true;
    }
};