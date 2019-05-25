
/*---------------------------
    Author : Javed Ansari
    Date   : 25 May 2019    
-----------------------------*/

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

string s1,s2,s3;

bool checkCond(int h, int m, int s){

	if(h<10) s1="0"+to_string(h);
	else s1=to_string(h);
	if(m<10) s2="0"+to_string(m);
	else s2=to_string(m);
	if(s<10) s3="0"+to_string(s);
	else s3=to_string(s);

	string ss=s1+s2+s3;
	unordered_set<char> S;
	for(int i=0;i<ss.length();i++)
		S.insert(ss[i]);
	return S.size()==ss.length();
}

void SOLVE_QUESTION(){	

	ll n;
	cin>>n;

	while(n--){

		// 00:00:00
		string str,ss;
		cin>>str;
		int h,m,s;
		ss=str.substr(0,2);
		h=stoi(ss);
		ss=str.substr(3,5);
		m=stoi(ss);
		ss=str.substr(6,8);
		s=stoi(ss);

		while(!checkCond(h,m,s)){

			s++;
			if(s==60) m++,s=0;
			if(m==60) h++,m=0;
		}
		cout<<s1+":"+s2+":"+s3;
		endl;
	}

	return;
}


int main(void){

	FASTREAD;
	SOLVE_QUESTION();

	return 0;
}
