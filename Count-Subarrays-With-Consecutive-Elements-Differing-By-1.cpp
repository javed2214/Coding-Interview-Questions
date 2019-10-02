// Program to Count SubArrays With Consecutive Elements Differing by 1
// https://www.geeksforgeeks.org/count-subarrays-with-consecutive-elements-differing-by-1/

#include<bits/stdc++.h>
using namespace std;

int countSubarrays(int *a, int n){

	int slow = 0, fast = 0, len = 0, res = 0;

	for(int i=1;i<n;i++){

		if(a[i] - a[i-1] == 1) fast++;
		
		else{
			
			len = fast - slow + 1;
			res += len * (len - 1) / 2;

			fast = i;
			slow = i;
		}
	}

	if(fast != slow){

		len = fast - slow + 1;
		res += len * (len - 1) / 2;
	}

	return res;
}

int main(){

	int a[] = {1,2,3,5,6,7};
	int n = sizeof(a) / sizeof(int);

	cout << countSubarrays(a,n);

	return 0;
}