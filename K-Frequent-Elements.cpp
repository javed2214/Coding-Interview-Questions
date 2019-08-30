// Program to Print K Frequent Elements
// Time Complexity: O(klogd), where d is the count of distinct elements in the array.
// Auxiliary Space: O(d), where d is the count of distinct elements in the array.
// https://www.geeksforgeeks.org/find-k-numbers-occurrences-given-array/

// Similar Problem: Sort Array By Frequency

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {3,1,4,4,5,2,4,6,1};
	int n = sizeof(a)/sizeof(int);

	int k = 2;

	unordered_map <int,int> Map;

	for(int i=0;i<n;i++) Map[a[i]]++;

	priority_queue <pair<int,int>> pq;
	
	for(auto it:Map) pq.push({it.second, it.first});

	while(k--){
		cout<<pq.top().second<<" ";
		pq.pop();
	}

	return 0;
}