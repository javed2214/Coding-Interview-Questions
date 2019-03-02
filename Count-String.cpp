// Program to Count Number of Strings

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="geeks for geeks is only for geeks";	
	string sub="geeks";

	stringstream ss(str);
	string word;
	int c=0;

	while(getline(ss,word,' ')){
		if(word==sub)
			c++;
	}
	cout<<c;

	return 0;
}