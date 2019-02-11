// Check Whether Array is Subset of Another Array or Not

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n1,n2,x;
	cin>>n1>>n2;
	set<int> S;
	cout<<"Enter Array: 1\n";
	for(int i=0;i<n1;i++){
		cin>>x;
		S.insert(x);
	}
	cout<<"\nEnter Array: 2\n";
	int flag=0;
	for(int i=0;i<n2;i++){
		cin>>x;
		if(S.find(x)==S.end())
			flag=1;
		S.erase(x);
	}
	cout<<"\n";
	if(flag) cout<<"No\n";
	else cout<<"Yes\n";

	return 0;
}