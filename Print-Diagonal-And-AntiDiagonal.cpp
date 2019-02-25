// Program to Print Diagonal and Anti-Diagonal of a Matrix in O(n) Time
// Tricky (^_^)

#include<bits/stdc++.h>
using namespace std;

int main(){

	vector <vector<int>> v={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int n=3;

	// To Print Diagonal
	
	for(int i=0;i<n;i++)
		cout<<v[i][i]<<" ";

	cout<<"\n";	

	// To Print Anti-Diagonal

	for(int i=0;i<n;i++)
		cout<<v[i][n-i-1]<<" ";

	return 0;
}