// Partition Labels LeetCode
// https://leetcode.com/problems/partition-labels/


// ******************************* METHOD 1 *******************************
// NOT THAT EFFICIENT

class Solution {
public:
    vector<int> partitionLabels(string S){

    	vector <int> a(26);
    	vector <int>  res;

    	for(int i=0;i<S.length();i++) a[S[i]-'a'] = i;

    	int i = 0;

    	while(i < S.length()){

    		int end = a[S[i]-'a'];
    		int j = i;

    		while(j != end)
    			end = max(end, a[S[j++]-'a']);

    		res.push_back(j - i + 1);
    		i = j + 1;
    	}

    	return res;
    }
};



// ******************************* METHOD 2 *******************************
// EFFICIENT ONE
// TC : O(n)

class Solution {
public:
    vector<int> partitionLabels(string S){

    	vector <int> a(26);
    	vector <int> res;

    	for(int i=0;i<S.length();i++) a[S[i]-'a'] = i;

    	int start = 0, end = 0;

    	for(int i=0;i<S.length();i++){

    		end = max(end, a[S[i]-'a']);
    		if(i == end){
    			res.push_back(end - start + 1);
    			start = end + 1;
    		}
    	}

    	return res;
    }
};