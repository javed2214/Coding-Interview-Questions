// Parenthesis Sequence
// https://www.hackerearth.com/problem/algorithm/parenthesis-sequence/

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD1 1000000007
#define MOD2 1000000009
#define DB(x) cout<<#x<<"="<<x<<"\n";
#define DB2(x,y) cout<<#x<<"="<<x<<"  "<<#y<<"="<<y<<"\n";
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define SORTV(a) sort(a.begin(),a.end())
#define SORTA(a,n) sort(a,a+n)
#define TEST(t) ll t; cin>>t; while(t--)
#define PI 2*acos(0.0)
#define FOR(i,n) for(int i=0;i<(n);i++)
#define RFOR(i,n) for(int i=(n)-1;i>=0;i--)
#define endl cout<<"\n";
#define co cout<<
#define SS cout<<"*";	
#define REPLACE(str,start,count,new_str) str.replace(start,count,new_str)
#define COUNT(str,ch) count(str.begin(),str.end(),ch)
#define ERASE(str,index) str.erase(str.begin()+index)
#define MAXA(a,n) *max_element(a,a+n)
#define MINA(a,n) *min_element(a,a+n)
#define REV(v) reverse(v.begin(),v.end())
#define SUM(v) accumulate(v.begin(),v.end(),0)
#define MAXV(v) *max_element(v.begin(),v.end())
#define MINV(v) *min_element(v.begin(),v.end())
#define ull unsigned long long
#define ll long long int
#define ld long double
#define SIZE 100000001
#define INF 0x7fffffff
#define MX 1000005

string getBracket(string str){

	string s1,s2;
	ll op=0;

	for(int i=0;i<str.length();i++){
		if(str[i]=='(') op++;
		else op--;
		if(op<0){
			s1+="(";
			op++;
		} 
	}
	while(op!=0){
		s2+=")";
		op--;
	}
	string p=s1+str+s2;

	return p;
}

void SOLVE_QUESTION(){	

	ll test;
	cin>>test;

	while(test--){

		string str;
		cin>>str;

		string p=getBracket(str);
		co p;
		endl;
	}

	return;
}


int main(void){

	FASTREAD;
	SOLVE_QUESTION();

	return 0;
}