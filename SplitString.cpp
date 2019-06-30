// Split String from Space

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	
	getline(cin,str);
	while(str.length()==0)
		getline(cin,str);
	
	stringstream ss(str);
	std::vector<string> v;
	string word;
	while(getline(ss,word,' ')){
		v.push_back(word);
	}
	for(auto it:v)
        cout<<it<<"\n";

	return 0;
}
