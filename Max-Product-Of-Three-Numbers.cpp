// Program to Find Maximum Product of Three Numbers
// https://leetcode.com/problems/maximum-product-of-three-numbers/

#include<bits/stdc++.h>
using namespace std;

/*************** METHOD 1 ***************/
// TC: O(n log(n))
// SC: O(1)

int Method_1(vector <int> &v){

	sort(v.begin(), v.end());

	int n = v.size();

	return max(v[0] * v[1] * v[n-1], v[n-1] * v[n-2] * v[n-3]);
}


/*************** METHOD 2 ***************/
// TC: O(n)
// SC: O(1)
// Efficient One

int Method_2(vector <int> &v){

	int mx1, mx2, mx3, mi1, mi2;

	mx1 = mx2 = mx3 = INT_MIN;
	mi1 = mi2 = INT_MAX;

	for(int i=0;i<v.size();i++){

		if(v[i] > mx1){
			mx3 = mx2;
			mx2 = mx1;
			mx1 = v[i];
		}
		else if(v[i] > mx2){
			mx3 = mx2;
			mx2 = v[i];
		}
		else if(v[i] > mx3)
			mx3 = v[i];

		if(v[i] < mi1){
			mi2 = mi1;
			mi1 = v[i];
		}
		else if(v[i] < mi2)
			mi2 = v[i];
	}

	return max(mx3 * mx2 * mx1, mx1 * mi1 * mi2);
}

int main(){

	vector <int> v = {-1,3,1,6,-8,4};

	cout << Method_1(v);
	cout << endl;
	cout << Method_2(v);

	return 0;	
}