// Map Erase

#include<bits/stdc++.h>
using namespace std;

int main(){

	unordered_map<int,char> Map;

	Map.insert({1,'a'});
	Map.insert({2,'b'});
	Map.insert({3,'c'});
	Map.insert({4,'d'});
	Map.insert({5,'e'});
	Map.insert({6,'f'});

	Map.erase(Map.find(6));
	Map.erase(Map.find(5));

	for(auto it:Map){
		cout<<it.first<<": "<<it.second;
		cout<<"\n";
	}

	return 0;
}