// Length of Longest Increasing Contiguous Elements

#include<bits/stdc++.h>
using namespace std;

int LenLongestIS(int *a, int n){
	int max=0,count=1;
	for(int i=0;i<n-1;i++){
		if(a[i+1]>a[i])
			count++;
		else{
			if(count>max)
				max=count;
			count=1;
		}
	}
	if(count>=max)
		return count;
	return max;
}

int main(){
	int a[]={2,3,4,5,6,7,1,2,3,4,5,55,66,5,5,12,3,4,5};
	int n=sizeof(a)/sizeof(int);

	cout<<LenLongestIS(a,n);
}
