// Program to Find Whether the Number can be Expressed as the Sum of Two Prime Numbers or Not
// If Possible then Print All Its Pairs

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int checkPrime(int n){

	int flag=0;
	if(n==0 or n==1) return 0;
	for(int i=2;i<=(n/2);i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag) return 0;
	return 1;
}

int main(){

	int k=100;
	for(int i=2;i<=k/2;i++){
		if(checkPrime(i) and checkPrime(k-i)){
			cout<<i<<" "<<k-i<<"\n";
		}
	}

	return 0;
}
