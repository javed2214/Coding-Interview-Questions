// Adding One to An Array
// [9 9 9] + 1 => [1 0 0 0]

#include<bits/stdc++.h>
using namespace std;

void getSum(int *a, int n){

	vector<int> v;
	int carry=1,x,sum;

	for(int i=n-1;i>=0;i--){
		sum=a[i]+carry;
		if(sum==10) x=0, carry=1;
		else x=sum, carry=0;
		v.push_back(x);
	}
	if(carry) v.push_back(carry);

	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i];

	return;
}

int main(){

	int a[]={9,9,9};
	int n=sizeof(a)/sizeof(int);

	getSum(a,n);

	return 0;	
}
