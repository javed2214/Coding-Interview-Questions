// Program to Print All Possible Pairs of Array Elements which are Equal to Given Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[]={3,2,5,1,4,7,6,9,10,8};
	int n=sizeof(a)/sizeof(int);
	int sum=11;

	map <int,bool> Map;
	for(int i=0;i<n;i++)
		Map[a[i]]=true;
	
	for(int i=0;i<n/2;i++){
		if(Map[sum-a[i]]==true){
			cout<<a[i]<<" "<<sum-a[i]<<"\n";
		}
	}
	return 0;
}
