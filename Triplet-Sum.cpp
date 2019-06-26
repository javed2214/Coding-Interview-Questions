// Find a Triplet that Sum to a Given Value
// TC: O(n^2)

#include<bits/stdc++.h>
using namespace std;

void findTriplet(int *a, int n, int sum){

	sort(a,a+n);
	
	for(int i=0;i<=n-3;i++){

		int low=i+1, high=n-1;
		
		while(low < high){

			if(a[i]+a[low]+a[high] > sum)
				high--;
			
			else if(a[i]+a[low]+a[high] == sum){
				cout<<a[i]<<" "<<a[low]<<" "<<a[high]<<"\n";
				low++;
				high--;
			}
			
			else low++;	
		}
	}

	return;
}

int main(){

	int a[]={1,4,45,6,10,8,12};
	int n=sizeof(a)/sizeof(int);
	int sum=22;

	findTriplet(a,n,sum);

	return 0;
}