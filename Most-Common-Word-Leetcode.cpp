// Most Common Words - LeetCode
// https://leetcode.com/problems/most-common-word/


// **************** METHOD 1 ******************

class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        
        unordered_set <string> s(b.begin(), b.end());
     
        for(auto &it:p) it = isalpha(it) ? tolower(it) : ' ';
        
        stringstream ss(p);
        string word;
        
        unordered_map <string,int> Map;
        
        pair <string,int> P("", 0);
        
        while(ss >> word)
            if(s.find(word) == s.end() and ++Map[word] > P.second)
                P = {word, Map[word]};
        
        return P.first;
    }
};


// **************** METHOD 2 ******************

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       
        unordered_map<string, int>m;
       
        for(int i = 0; i < paragraph.size();){
          
            string s = "";
            while(i < paragraph.size() && isalpha(paragraph[i])) s.push_back(tolower(paragraph[i++]));
            while(i < paragraph.size() && !isalpha(paragraph[i])) i++;
            m[s]++;
        }

        for(auto x: banned) m[x] = 0;
        
        string res = "";
        int count = 0;
        
        for(auto x: m)
            if(x.second > count) res = x.first, count = x.second;
        
        return res;  
    }
};