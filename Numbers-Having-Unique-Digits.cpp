// Given a Range, Print all Numbers having Unique Digits

#include<bits/stdc++.h>
using namespace std;

void getNumbers(int l, int r){

	for(int i=l;i<=r;i++){
		int num=i;
		bool visited[10]={false};

		while(num){
			if(visited[num%10])
				break;
			visited[num%10]=true;
			num/=10;
		}
		if(num==0) cout<<i<<" ";
	}
	return;
}

int main(){

	int l,r;
	l=10,r=30;

	getNumbers(l,r);

	return 0;
}