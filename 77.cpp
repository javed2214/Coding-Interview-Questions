// Program to Find Common Elements in Three Sorted Arrays

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={20,30,40,50,60,120};
	int b[]={10,30,50,60,120,140,150,170};
	int c[]={50,60,70,90,120,160,200,220,240,280};

	int n1=sizeof(a)/sizeof(int);
	int n2=sizeof(b)/sizeof(int);
	int n3=sizeof(c)/sizeof(int);

	int i=0,j=0,k=0;

	while(i<n1 and j<n2 and k<n3){

		if(a[i]==b[j] and b[j]==c[k]){
			cout<<a[i]<<" ";
			i++;j++;k++;
		}
		else if(a[i]<b[j]) i++;

		else if(b[j]<c[k]) j++;

		else k++;
	}

	return 0;
}