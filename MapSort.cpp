// Map Sort Implementation

// James 50 60
// Jack 30 75
// Jane 40 88
// Jeff 70 90
// John 58 82


#include<bits/stdc++.h>
using namespace std;

int main(){

	int p[20],c[20];
	string str[20];
	int n=5;
	for(int i=0;i<n;i++)
		cin>>str[i]>>p[i]>>c[i];
	
	map <string,pair <int,int> > M;
	for(int i=0;i<n;i++)
		M[str[i]]=make_pair(p[i],c[i]);

	cout<<"\n";

	map <string,pair <int,int> >::iterator ptr;
	for(ptr=M.begin();ptr!=M.end();ptr++)
		cout<<ptr->first<<" "<<ptr->second.first<<" "<<ptr->second.second<<endl;

	return 0;
}
