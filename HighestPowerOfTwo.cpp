// Highest power of 2 less than or equal to given Number

#include<bits/stdc++.h>
using namespace std;

int getPower(int n){

	while(n){
		if((n&(n-1))==0)
			return n;
		n--;
	}
}

int main(){

	int n=675;
	cout<<getPower(n);
		
	return 0;
}
