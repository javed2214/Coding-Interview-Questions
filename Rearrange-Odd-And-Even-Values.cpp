// Rearrange Odd and Even Elements in Alternate Fashion in Ascending Order
// https://www.geeksforgeeks.org/rearrange-odd-and-even-values-in-alternate-fashion-in-ascending-order/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={9,8,13,2,19,14};
	int n=sizeof(a)/sizeof(int);

	set <int> oddSet,evenSet;

	for(int i=0;i<n;i++){
		if(a[i] & 1) oddSet.insert(a[i]);
		else evenSet.insert(a[i]);
	}
	set <int> :: iterator it1,it2;
	
	it1=oddSet.begin();
	it2=evenSet.begin();
	int flag=0;

	if(*it1 < *it2) flag=1;

	for(int i=0;i<n;i++){
		if(flag){
			cout<<(*it1)<<" ";
			it1++;
			flag=0;
		}
		else{
			cout<<(*it2)<<" ";
			it2++;
			flag=1;
		}
	}
	return 0;
}