// ------- Author: Javed Ansari -------
// Minimum no of Currency Notes Required

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

int main(){

	// Denominations:  1000 500 100 50 20 10 5 2 1

	int notes[]={1000,500,100,50,20,10,5,2,1};
	int n=sizeof(notes)/sizeof(int);

	int count[n];
	memset(count,-1,sizeof(count));

	int x;
	cin>>x;

	for(int i=0;i<n;i++){
		if(x>=notes[i]){
			count[i]=x / notes[i];
			x=x % notes[i];
		}
	}
	for(int i=0;i<n;i++)
		if(count[i]!=-1) cout<<notes[i]<<": "<<count[i]<<"\n";

	return 0;
}
