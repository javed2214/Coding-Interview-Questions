// Program to Segregate Zeros and Ones
// Two Approaches

#include<bits/stdc++.h>
using namespace std;

void method1(int *a, int n){

	int l = 0;
	int r = n - 1;

	while(l < r){

		while(a[l] == 0 and l < r) l++;
		while(a[r] == 1 and l < r) r--;

		if(l < r) swap(a[l], a[r]); 
	} 
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	cout<<endl;
}


void method2(int *a, int n){

	int l = 0;
	int r = n - 1;

	while(l < r){

		if(a[l] == 1){
			swap(a[l], a[r]);
			r -= 1;
		}
		else l += 1;
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}


void method3(int *a, int n){

	int j = 0;

	for(int i=0;i<n;i++){
		if(a[i] == 0){
			swap(a[i], a[j]);
			j++;
		}
	}

	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}


int main(){

	int a[] = {1,0,1,0,0,1,1,1,0,1,0,0};
	int n = sizeof(a)/sizeof(int);

	method1(a,n);
	method2(a,n);
	method3(a,n);

	return 0;
}
