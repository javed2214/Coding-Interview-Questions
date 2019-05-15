// Sort Array of Strings According to Alphabetical Order Defined by Another String

#include<bits/stdc++.h>
using namespace std;

unordered_map <char,int> Map;

bool Compare(string x, string y){

	for(int i=0;i<min(x.length(), y.length());i++){
		if(Map[x[i]]==Map[y[i]]) continue;
		return Map[x[i]] < Map[y[i]];
	}
	return x.length() < y.length();
}

int main(){

	string str="fguecbdavwyxzhijklmnopqrst";
	std::vector<string> v={"geeksforgeeks","is","the","best","place","for","learning"};

	for(int i=0;i<str.length();i++)
		Map[str[i]]=i;

	sort(v.begin(), v.end(), Compare);

	for(auto it:v)
		cout<<it<<" ";

	return 0;
}