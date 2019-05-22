// Program to Print Pascal's Triangle

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,p=0;
	cin>>n;

	int a[n+1][2*n+1];
	memset(a,0,sizeof(a));
	int flag=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(j<n-p or j>n+p) a[i][j]=0;
			else if(j==n-p) a[i][j]=1;
			else if(j==n+p) a[i][j]=1;
			else if(flag) a[i][j]=0;	
			else a[i][j]=a[i-1][j-1]+a[i-1][j+1];
			flag=!flag;
		}
		p++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(a[i][j]==0) cout<<" ";
			else cout<<a[i][j];
		}
		cout<<endl;
	}

	return 0;
}