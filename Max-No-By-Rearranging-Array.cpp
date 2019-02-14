// Program to Find Maximum Number formed By Rearranging the Array Elements
// Ex: [1,23,98,45] => 9845231

#include<bits/stdc++.h>
using namespace std;

bool Compare(string s1, string s2){

	string t1=s1+s2;
	string t2=s2+s1;

	return (t1>t2);
}

int main(){

	vector<string> v;
	int n;
	string str;
	cout<<"No of Elements: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		v.push_back(str);
	}
	sort(v.begin(),v.end(),Compare);

	for(auto it:v) cout<<it;

	return 0;
}