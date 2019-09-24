// Rearrange Characters of String such that No Two Adjacent Characters are Same
// 

#include<bits/stdc++.h>
using namespace std;

void rearrangeString(string s){

	int a[26] = {0};
	int n = s.length();

	for(int i=0;i<n;i++) a[s[i]-'a']++;

	priority_queue <pair<int,char>> pq;

	for(int i=0;i<26;i++)
		if(a[i]) pq.push({a[i],(i+'a')});

	pair<int,char> prev = {-1, '$'};

	string str;

	while(!pq.empty()){

		pair <int,char> temp = pq.top();
		pq.pop();
		str += temp.second;

		if(prev.first > 0) pq.push(prev);

		temp.first -= 1;
		prev = temp;
	}

	if(n != str.length()) cout << "Not a Valid String!";
	else cout << str;
}

int main(){

	string s;
	cin>>s;

	rearrangeString(s);

	return 0;
}