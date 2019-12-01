// Program to Check If Array Elements are Consecutive
// geeksforgeeks.org/check-if-array-elements-are-consecutive/

/*

The idea is to check for following two conditions. If following two conditions are true, then return true.

1) max – min + 1 = n where max is the maximum element in array, min is minimum element in array and n is the number of elements in array.
2) All elements are distinct.
To check if all elements are distinct, we can create a visited[] array of size n.
We can map the ith element of input array arr[] to visited array by using arr[i] – min as index in visited[].

*/


// *********************** METHOD 1 ***********************

// Inefficient

#include<bits/stdc++.h>
using namespace std;

bool checkArray(int *a, int n){

	if(n < 1) return false;

	int mx = INT_MIN, mi = INT_MAX;

	for(int i=0;i<n;i++){
		
		mx = max(mx, a[i]);
		mi = min(mi, a[i]);
	}

	if(mx - mi + 1 == n){

		bool vis[n];
		memset(vis, false, sizeof(vis));

		for(int i=0;i<n;i++){

			if(vis[a[i] - mi]) return false;
			vis[a[i] - mi] = true;
		}
		return true;
	}

	return false;
}

int main(){

	int a[] = {5,4,2,1,3,6};
	int n = sizeof(a) / sizeof(int);

	if(checkArray(a,n)) cout<<"Yes";
	else cout<<"No";

	return 0;
}




// *********************** METHOD 2 ***********************

// Efficient

bool areConsecutives(int arr[], int n) 
{ 
    // Find minimum element in array 
    int first_term = *(min_element(arr, arr + n)); 
  
    // Calculate AP sum 
    int ap_sum = (n * (2 * first_term + (n - 1) * 1)) / 2; 
  
    // Calculate given array sum 
    int arr_sum = 0; 
    for (int i = 0; i < n; i++) 
        arr_sum += arr[i]; 
  
    // Compare both sums and return 
    return ap_sum == arr_sum; 
} 