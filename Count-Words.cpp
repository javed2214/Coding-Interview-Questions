// Program to Count Number of Words Present in a String

#include<bits/stdc++.h>
using namespace std;

int main(){

	vector <string> v;
	
	v={"welcome", "to", "geeks", "portal"};
	string str="geeksforgeeks is a computer science portal for geeks";

	unordered_map <string,bool> Map;

	for(int i=0;i<v.size();i++)
		Map[v[i]]=true;

	stringstream ss(str);
	string word;

	int c=0;
	while(getline(ss,word,' ')){
		if(Map[word]==true)
			c++;
	}
	cout<<"No of Words: "<<c;
}