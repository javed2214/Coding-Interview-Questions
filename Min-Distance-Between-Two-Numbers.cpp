// Minimum Distance Between Two Numbers
// Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {3,1,4,7,6,9,2,0,5,3,6,1,8};
	int n = sizeof(a)/sizeof(int);

	int x,y;
	cin>>x>>y;

	int prev = -1;
	int min_distance = INT_MAX;
	int i = 0;

	for(i=0;i<n;i++){
		if(a[i] == x or a[i] == y){
			prev = i;
			break;
		}
	}

	for(;i<n;i++){
		if(a[i] == x or a[i] == y){
			if(a[i] != a[prev] and (i - prev) < min_distance){
				min_distance = i - prev;
				prev = i;
			}
			else prev = i;
		}
	}

	if(min_distance == INT_MAX) cout<<"Invalid!";
	else cout<<min_distance;

	return 0;
}