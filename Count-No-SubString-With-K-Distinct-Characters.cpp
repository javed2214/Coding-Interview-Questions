// Count Number of SubString With K Distinct Characters
// https://www.geeksforgeeks.org/count-number-of-substrings-with-exactly-k-distinct-characters/
// Time Complexity: O(n*n)

#include<bits/stdc++.h>
using namespace std;

int countDistinctSubstring(string s, int k){

	int n = s.length();

	int res = 0;
	int a[26] = {0};

	for(int i=0;i<n;i++){

		int cnt = 0;
		memset(a,0,sizeof(a));

		for(int j=i;j<n;j++){

			if(a[s[j]-'a'] == 0) cnt++;
			a[s[j]-'a']++;

			if(cnt == k) res++;
			if(cnt > k) break;
		}
	}

	return res;
}

int main(){

	string s;
	cin>>s;

	int k;
	cin>>k;

	cout << countDistinctSubstring(s,k);

	return 0;
}