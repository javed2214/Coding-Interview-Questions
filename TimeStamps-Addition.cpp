// ------- Author: Javed Ansari -------
// Program to Add Two TimeStamps

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end());
#define ll long long int
#define SIZE 100000001

int stringToInt(string s){
	int sum=0;
	for(int i=0;i<s.length();i++)
		sum=sum*10+(s[i]-'0');
	return sum;
}

int main(){

	int h1,h2,h3,m1,m2,m3,s1,s2,s3,d;
	
	cin>>h1>>m1>>s1;
	cin>>h2>>m2>>s2;

	h3=h1+h2;
	m3=m1+m2;
	s3=s1+s2;

	m3=m3+s3/60;
	s3=s3%60;
	h3=h3+m3/60;
	m3=m3%60;
	d=h3/24;

	cout<<d<<" Days  "<<h3<<" Hrs  "<<m3<<" Mins  "<<s3<<" Secs";

	return 0;
}
