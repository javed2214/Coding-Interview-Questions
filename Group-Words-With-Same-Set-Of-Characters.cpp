// Group Words With Same Set of Characters
// https://www.geeksforgeeks.org/print-words-together-set-characters/

#include<bits/stdc++.h>
using namespace std;

string getKey(string s){

	int a[26] = {0};

	string str;

	for(int i=0;i<s.length();i++) a[s[i]-'a']++;
	
	for(int i=0;i<26;i++){
		while(a[i]--)
			str += (char)(i + 'a');
	}

	return str;
}

int main(){

	vector <string> v = {
		"may", "student", "students", "dog", "studentssess", "god", "cat", "act", "tab", "bat", "flow",
		"wolf", "lambs", "amy", "yam", "balms", "looped", "poodle"
	};

	unordered_map <string, vector<string>> Map;

	for(int i=0;i<v.size();i++){
		string key = getKey(v[i]);
		Map[key].push_back(v[i]);
	}

	for(auto it:Map){
		for(auto pt:it.second)
			cout<<pt<<" ";
		cout<<"\n";
	}

	return 0;
}