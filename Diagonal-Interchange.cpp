// Program to Interchange Diagonals of a Square Matrix
/*

	1 2 3		3 2 1
	4 5 6	=>	6 5 4
	7 8 9		9 8 7

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,8},{4,2,6,3}};
	int n=4;
	
	int i=0,j=0;
	int k=0,l=n-1;

	while(i<n)
		swap(a[i++][j++],a[k++][l--]);


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}