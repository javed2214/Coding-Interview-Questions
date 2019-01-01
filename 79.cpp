// Program to Find LCM of Two Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a=7,b=5;
	
	int x=max(a,b);
	int y=min(a,b);

	for(int i=x;i+=x;){
		if(i%y==0){
			cout<<i;
			return 0;
		}
	}

	return 0;
}