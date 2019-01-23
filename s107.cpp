// Program to Count Number of Segments in a String
// Ex: "Hello, my name is John" ==>> 5
// Ex: "           " ==>> 0

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="Hello, my name is John";
	stringstream ss(str);
	std::vector<string> v;
	string word;
	while(getline(ss,word,' ')){
		v.push_back(word);
	}
	int count=0;
	for(auto it:v){
		if(it!="")
			count++;
	}
	cout<<count;

	return 0;
}