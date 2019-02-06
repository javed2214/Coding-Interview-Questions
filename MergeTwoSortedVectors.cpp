// Program to Merge Two Sorted Vectors

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	std::vector<int> v1={2,4,6,8};
	std::vector<int> v2={1,3,5,7};
	std::vector<int> v;
	int i=0,j=0;
	while(i<v1.size() and j<v1.size()){
		if(v1[i]<v2[j])
			v.push_back(v1[i++]);
		else
			v.push_back(v2[j++]);
	}
	while(i<v1.size())
		v.push_back(v1[i++]);

	while(j<v2.size())
		v.push_back(v2[j++]);
	
	for(auto it:v)
		cout<<it<<" ";

	return 0;
}
