// Program to Rotate a Square Matrix 90* Anticlockwise
// 	1 2 3       3 6 9
// 	4 5 6  ==>> 2 5 8
// 	7 8 9		1 4 7

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;	
	cin>>n;
	int a[101][101];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){			// Transpose of Square Matrix
		for(int j=i;j<n;j++){
			swap(a[i][j],a[j][i]);
		}
	}
	cout<<"\n";
	int p=n/2;
	int k=0;
	while(p--){						// Swapping of Rows
		for(int i=0;i<n;i++){
			swap(a[k][i],a[n-k-1][i]);
		}
		k++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}