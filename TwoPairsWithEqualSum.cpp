// Given an array of distinct integers, find if there are two pairs (a, b) and (c, d) such that a+b = c+d, and a, b, c and d are distinct elements.
// If there are multiple answers, then print any of them.
// Ex : 3,4,7,1,2,9,8
// Output : (3,8) and (4,7)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,4,7,1,2,9,8};
	int n=sizeof(a)/sizeof(int);

	typedef struct Node{
		int d1,d2,sum;
	}Node;
	Node node[100];
	
	int k=0,sum;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum=a[i]+a[j];
			node[k].sum=sum;
			node[k].d1=a[i];
			node[k].d2=a[j];
			k++;
		}
	}
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(node[i].sum==node[j].sum){
				cout<<"("<<node[i].d1<<" "<<node[i].d2<<"),("<<node[j].d1<<" "<<node[j].d2<<")\n";
				return 0;
			}
		}
	}
		
	return 0;
}
