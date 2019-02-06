// https://www.codechef.com/BLUP2019/problems/DIV4/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100001

int main(){

	FASTREAD;
	ll test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		map<string,bool>Map;
		for(int i=4;i<=98;i++)
			if(i%4==0) Map[to_string(i)]=true;
		priority_queue<int,vector<int>,greater<int>>pq;
		for(int i=0;i<s.length()-1;i++){
			if(s[i]-'0'==4 or s[i]-'0'==8 or s[i]-'0'==0)
				pq.push(s[i]-'0');
			string x=to_string(s[i]-'0')+to_string(s[i+1]-'0');
			if(Map[x]==true)
				pq.push(stoi(x));
		}
		int n=s.length()-1;

		if(s[n]-'0'==4 or s[n]-'0'==8 or s[n]-'0'==0)
				pq.push(s[n]-'0');
		if(pq.size()!=0)
			cout<<"YES "<<pq.top()<<"\n";
		else cout<<"NO\n";
	}
	return 0;
}