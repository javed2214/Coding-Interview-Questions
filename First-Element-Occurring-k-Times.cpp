// Program to Find First Element Occurring 'k' Times in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,7,4,3,4,8,7};
	int n=sizeof(a)/sizeof(int);

	int k=2;

	unordered_map<int,int>Map;

	for(int i=0;i<n;i++)
		Map[a[i]]++;

	for(int i=0;i<n;i++){
		if(Map[a[i]]==k){
			cout<<a[i]<<"\n";
			break;
		}
	}
	return 0;
}