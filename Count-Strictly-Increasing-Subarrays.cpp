// Program to Count Number of Strictly Increasing SubArrays
// https://www.geeksforgeeks.org/count-strictly-increasing-subarrays/

#include<bits/stdc++.h>
using namespace std;

/****************** METHOD 1 ******************/

// TC: O(m) m: No of Subarrays in Output
// SC: O(1)

int Method_1 (int *a, int n){

	int cnt = 0;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] > a[j-1]) cnt++;
			else break;
		}
	}
	return cnt;
}


/****************** METHOD 2 ******************/

// TC: O(n) n: Length of Array
// SC: O(1)

int Method_2 (int *a, int n){

	int cnt = 0, len = 1;

	for(int i=0;i<n-1;i++){
		if(a[i+1] > a[i]) len++;
		else{
			cnt += ((len * (len-1)) / 2);
			len = 1;
		}
	}

	if(len > 1) cnt += ((len * (len - 1)) / 2);

	return cnt;
}

int main(){

	int a[] = {1,2,3,4};
	int n = sizeof(a) / sizeof(int);

	cout << Method_1(a,n) << endl;
	cout << Method_2(a,n) << endl;

	return 0;
}
