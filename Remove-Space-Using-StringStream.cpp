// Program to Remove Spaces From String using StringStream

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="  jd sdj dw w dkw d         pp    ";
	
	stringstream ss(str);
	string word;
	string s;
	
	while(getline(ss,word,' '))
		s+=word;

	cout<<s;

	return 0;
}