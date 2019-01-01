// Factorial of Large Numbers

#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int main(){

	int test;
	cin>>test;
	while(test--){
		int m=1,temp=0,x;
		int a[MAX],n;
		a[0]=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=0;j<m;j++){
				x=a[j]*i+temp;
				a[j]=x%10;
				temp=x/10;
			}
			while(temp){
				a[m]=temp%10;
				temp/=10;
				m++;
			}
		}
		for(int i=m-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}