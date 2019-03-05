// Program to Count Total Number of Set Bits in All the Numbers from 1 to n Without Using Builtin Function

#include<bits/stdc++.h>
using namespace std;

int countBits(int n){

	int sum=0,count;

	for(int i=1;i<=n;i++){
		count=0;
		int c=i;
		while(c){
			count+=(c&1);
			c>>=1;
		}
		sum+=count;
	}
	return sum;
}

int main(){

	int n;
	cin>>n;

	cout<<countBits(n);
		
	return 0;
}
