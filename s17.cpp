// Print a Number Strictly Less than the given Number such that All its Digits are Distinct.

#include<bits/stdc++.h>
using namespace std;

int checkNo(int n){
	
	int hash[10];
	memset(hash,0,sizeof(hash));
	while(n){
		int r=n%10;
		hash[r]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		if(hash[i]>1) return 0;
	}
	return 1;
}

int main(){

	int n=1423142;
	while(1){
		int x=checkNo(n);
		if(x==0) n--;
		else{
			cout<<n;
			break;
		}
	}
	return 0;
}