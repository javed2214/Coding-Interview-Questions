// Check Whether the Number can be Represented by k Distinct Positive Numbers
// n=12 and k=4 -> Yes! [1+2+4+5]=12

#include<bits/stdc++.h>
using namespace std;

bool checkNum(int n, int k){

	if(n >= (k*(k+1))/2) return true;
	return false;
}

int main(){

	int n,k;
	n=12;k=4;

	bool x=checkNum(n,k);

	if(x) cout<<"Yes!";
	else cout<<"No!";

	return 0;
}