// Group Elements of an Array based on their First Occurrence
// https://www.techiedelight.com/group-elements-array-based-first-occurrence/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {1,2,3,1,2,1,3};
	int n = sizeof(a) / sizeof(int);

	unordered_map <int,int> Map;

	for(int i=0;i<n;i++) Map[a[i]]++;

	for(int i=0;i<n;i++){
		if(Map.find(a[i]) != Map.end()){
			int x = Map[a[i]];
			while(x--) cout<<a[i]<<" ";
			Map.erase(a[i]);
		}
	}
	return 0;
}