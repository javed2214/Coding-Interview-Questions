// Program to Find Third Largest Element in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={12,3,1,4,45,23,34};
	int n=sizeof(a)/sizeof(int);

	int first,sec,third;

	first=a[0];
	sec=INT_MIN;
	third=INT_MIN;

	if(n<3) cout<<"Invalid Input!";

	else{
		for(int i=1;i<n;i++){

			if(a[i]>first){
				third=sec;
				sec=first;
				first=a[i];
			}

			else if(a[i]>sec){
				third=sec;
				sec=a[i];
			}

			else if(a[i]>third)
				third=a[i];
		}
		cout<<"Third Largest: "<<third;
	}

	return 0;
}
