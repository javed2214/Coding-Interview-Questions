// Program to Find Repeating Element in an Array in O(n) TC and O(1) Space

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,5,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		if(a[abs(a[i])-1] > 0) a[abs(a[i])-1] = -a[abs(a[i])-1];
		else cout<<abs(a[i]);
	}
	return 0;
}