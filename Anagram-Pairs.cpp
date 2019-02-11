// Program to Find Anagram Pairs

#include<bits/stdc++.h>
using namespace std;

void anagramPairs(vector<string> &vec){

	map<string,vector<string>> Map;
	for(int i=0;i<vec.size();i++){
		string str=vec[i];
		sort(str.begin(),str.end());
		Map[str].push_back(vec[i]);
	}
	for(auto it:Map){
		for(auto ptr:it.second)
			cout<<ptr<<" ";
		cout<<"\n";
	}
}

int main(){

	vector<string> vec={"geeks","quiz","hello","cat","ziuq","eeksg","ellho","tac"};
	anagramPairs(vec);

	return 0;
}