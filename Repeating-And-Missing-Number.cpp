// Find Missing and Repeating Numbers in an Array
// https://www.youtube.com/watch?v=gWhSiGETn9Y

#include<bits/stdc++.h>
using namespace std;

int setBit(int x){		// Return Set Bit of x

	int i=0;
	while(1){

		if(x&(1<<i))
			return (i+1);
		i++;
	}
	return -1;
}

int main(){

	int a[]={5,4,3,8,6,3,1,7};
	int n=sizeof(a)/sizeof(int);

	int temp=0;

	for(int i=0;i<n;i++)
		temp^=a[i]^(i+1);	// XOR of a[] and (1 to 8)

	int p=setBit(temp);
	int x=0,y=0;

	for(int i=0;i<n;i++){

		if(a[i]&p) x^=a[i];
		else y^=a[i];
	}
	for(int i=1;i<=n;i++){
		if(i&p) x^=i;
		else y^=i;
	}
	cout<<x<<" "<<y;

	return 0;
}