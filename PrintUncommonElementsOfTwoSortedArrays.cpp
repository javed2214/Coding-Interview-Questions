// Program to Print Uncommon Elements Of Two Sorted Arrays

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={10,20,30};
	int n1=sizeof(a)/sizeof(int);
	int b[]={20,25,30,40,50};
	int n2=sizeof(b)/sizeof(int);

	std::vector<int> v;

	int i=0,j=0;

	while(i<n1 and j<n2){

		if(a[i]<b[j]){
			v.push_back(a[i]);
			i++;
		}
		else if(a[i]>b[j]){
			v.push_back(b[j]);
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	while(i<n1)
		v.push_back(a[i++]);
	while(j<n2)
		v.push_back(b[j++]);

	for(auto it:v) cout<<it<<" ";

	return 0;
}