// Print All Pairs in an Unsorted Array With Equal Sum

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={6,4,12,10,22,54,32,42,21,11,8,2};
	int n=sizeof(a)/sizeof(int);

	map <int,vector<pair<int,int>>> Map;

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
				Map[a[i]+a[j]].push_back({a[i],a[j]});
		}
	}
	int sum=0;
	for(auto it:Map){
		if(it.second.size()>=2){
			for(auto pt:it.second){
				cout<<"("<<pt.first<<" "<<pt.second<<") ";
				sum=pt.first+pt.second;
			}
			cout<<"-> "<<sum;
			cout<<"\n";
		}
	}
	return 0;
}