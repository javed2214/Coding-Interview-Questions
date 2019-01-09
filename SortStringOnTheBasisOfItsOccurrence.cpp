// Program to Sort String on the basis of its Occurrence (Decreasing Order)
// bbdaaaccccc => cccccaaabbd

#include<bits/stdc++.h>
using namespace std;

bool Compare(pair <char,int> &p1, pair <char,int> &p2){
	return (p1.second > p2.second);
}

int main(){

	string str="bbdaaaccccc";
	int len=str.length();
	std::map<char,int> Map;
	for(int i=0;i<len;i++)
		Map[str[i]]++;
	int size=Map.size();
	pair <char,int> Pair[size];
	int i=0;
	for(auto it:Map)
		Pair[i++]=make_pair(it.first,it.second);
	sort(Pair,Pair+size,Compare);
	for(auto it: Pair){
		while(it.second--)
			cout<<it.first;
	}

	return 0;
}
