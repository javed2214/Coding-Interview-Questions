// Program to Sort Array by Parity
// [3,4,2,6,9] -> [4,2,6,3,9]
// Segregate Even and Odd Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {4,1,6,7,9,3,1,6,5,3};
	int n = sizeof(a) / sizeof(int);

	int j = 0;

	for(int i=0;i<n;i++){
		if(a[i] % 2 == 0){
			swap(a[i], a[j]);
			j++;
		}
	}

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}