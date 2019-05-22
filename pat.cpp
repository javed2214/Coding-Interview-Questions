
/*---------------------------
    Author : Javed Ansari
    Date   : 22 May 2019    
-----------------------------*/

/*
9
        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654321
*/

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


void SOLVE_QUESTION(){	

	int n,p=0,k=1,s;
	cin>>n;

	for(int i=1;i<=n;i++){
		s=i-1;
		k=1;
		for(int j=1;j<=n*2;j++){
			if(j<n-p or j>n+p) cout<<" ";
			else if(j<=n) cout<<k++;
			else cout<<s--;
		}
		endl;
		p++;
	}

	return;
}


int main(void){

	FASTREAD;
	SOLVE_QUESTION();

	return 0;
}