// Rearrange an Array Such that Arr[i] = i
// https://www.geeksforgeeks.org/rearrange-array-arri/

#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(int *a, int n){

	for(int i=0;i<n;i++){

		if(a[i] != -1 and a[i] != i){

			int x = a[i], y;

			while(a[x] != x and a[x] != -1){
			
				y = a[x];
				a[x] = x;
				x = y;
			}
			
			a[x] = x;

			if(a[i] != i) a[i] = -1;
		}
	}
}

int main(){

	int a[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
	int n = sizeof(a) / sizeof(int);

	rearrangeArray(a,n);

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}