// Check Whether an Array is Subarray of Another Array
// Brute Force Approach is to Run Two Loops -> TC [O(n1*n2)]
// Efficient Approach is to Use Two Pointers Method

#include<bits/stdc++.h>
using namespace std;

bool checkArray(int *a, int *b, int n1, int n2){

	int i=0,j=0;

	while(i<n1 and j<n2){

		if(a[i]==b[j]){
			i++;
			j++;
			if(j==n2) return true;
		}
		else{
			i++;
			j=0;
		}
	}
	return false;
}

int main(void){

	int a[]={2,3,0,5,1,1,2};
	int n1=sizeof(a)/sizeof(int);

	int b[]={3,0,5,1};
	int n2=sizeof(b)/sizeof(int);

	bool x=checkArray(a,b,n1,n2);

	if(x) cout<<"Yes";
	else cout<<"No";

	return 0;
}