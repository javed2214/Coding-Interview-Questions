// Program to Merge Two Sorted Arrays in O(n) Time

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a1[]={1,3,5,7,9};
	int a2[]={2,4,8,10,11,12,16};

	int b[100];
	memset(b,-1,sizeof(b));
	
	int n1=sizeof(a1)/sizeof(int);
	int n2=sizeof(a2)/sizeof(int);

	int i=0,j=0,k=0;

	while(i<n1 and j<n2){

		if(a1[i]<a2[j])
			b[k++]=a1[i++];
		else
			b[k++]=a2[j++];
	}	
	while(i<n1)
		b[k++]=a1[i++];

	while(j<n2)
		b[k++]=a2[j++];

	for(int i=0;b[i]!=-1;i++)
		cout<<b[i]<<" ";

	return 0;
}