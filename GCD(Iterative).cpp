// Program to Find GCD of Two Numbers Iteratively

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a=20,b=34;
	
	int x=max(a,b);
	int y=min(a,b);

	for(int i=y;i>=1;i--){
		if(x%i==0 and y%i==0){
			cout<<i;
			return 0;
		}
	}

	return 0;
}
