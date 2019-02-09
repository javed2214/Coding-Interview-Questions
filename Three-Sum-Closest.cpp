// Find Three Intgers Such that the Sum is Closest to Target
// https://leetcode.com/problems/3sum-closest/

#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(int *a, int n, int target){

	sort(a,a+n);
	int l,r,res,temp;
	res=a[0]+a[1]+a[2];
	for(int i=0;i<n-2;i++){
		l=i+1;
		r=n-1;
		while(l<r){
			temp=a[i]+a[l]+a[r];
			if(abs(target-temp)<abs(target-res))
				res=temp;
			else if(temp>target)
				r--;
			else
				l++;
		}
	}
	return res;
}

int main(){

	int a[]={-1,2,1,-4};
	int n=sizeof(a)/sizeof(int);
	int target=1;

	cout<<threeSumClosest(a,n,target);

	return 0;
}