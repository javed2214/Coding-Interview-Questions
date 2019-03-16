// Program to Merge Three Sorted Arrays
// https://www.geeksforgeeks.org/merge-3-sorted-arrays/
// Time Complexity: O(a.size() + b.size() + c.size())

#include<bits/stdc++.h>
using namespace std;

void mergeVectors(vector<int> a, vector<int> b, vector<int> c, vector<int> &v){

	int i,j,k,x,y,z;
	i=j=k=0;
	x=a.size(); y=b.size(); z=c.size();

	while(i<x and j<y and k<z){

		int p=min(a[i],min(b[j],c[k]));
		v.push_back(p);

		if(p==a[i]) i++;
		else if(p==b[j]) j++;
		else k++;
	}
	while(i<x and j<y){
		if(a[i]<b[j]){
			v.push_back(a[i]);
			i++;
		}
		else{
			v.push_back(b[j]);
			j++;
		}
	}
	while(j<y and k<z){
		if(b[j]<c[k]){
			v.push_back(b[j]);
			j++;
		}
		else{
			v.push_back(c[k]);
			k++;
		}
	}
	while(i<x and k<z){
		if(a[i]<c[k]){
			v.push_back(a[i]);
			i++;
		}
		else{
			v.push_back(c[k]);
			k++;
		}
	}
	while(i<x){
		v.push_back(a[i]);
		i++;
	}
	while(j<y){
		v.push_back(b[j]);
		j++;
	}
	while(k<z){
		v.push_back(c[k]);
		k++;
	}
	return;
}

int main(){

	vector<int> a,b,c,v;
	a={1,2,3,5};
	b={6,7,8,9};
	c={10,11,12};

	mergeVectors(a,b,c,v);

	for(auto it:v) cout<<it<<" ";

	return 0;
}