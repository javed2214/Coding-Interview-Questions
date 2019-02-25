// Program to Swap Diagonals and Anti-Diagonals of a Square Matrix in O(n) Time

#include<bits/stdc++.h>
using namespace std;

int main(){

	vector <vector<int>> a={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int n=3;

	for(int i=0;i<n;i++)
		swap(a[i][i],a[i][n-i-1]);

	for(auto it:a){
		for(auto ptr:it)
			cout<<ptr<<" ";
		cout<<"\n";
	}
	return 0;
}