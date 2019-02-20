// Find the Element having Different Frequency than Other Array Elements

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,1,2,3,4,3,5,7,6,7,6,5};
	int n=sizeof(a)/sizeof(int);

	unordered_map<int,int> Map;
	unordered_map<int,vector<int>>MapV;

	for(int i=0;i<n;i++)
		Map[a[i]]++;

	for(auto it:Map)
		MapV[it.second].push_back(it.first);

	for(auto it:MapV){
		if(it.second.size()==1)
			for(auto pt:it.second)
				cout<<pt;
	}
	return 0;
}