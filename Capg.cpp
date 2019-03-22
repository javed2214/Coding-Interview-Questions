// Convert Float string into Float Value
// "12.34" => 12.34

#include<bits/stdc++.h>
using namespace std;

double getSum(string word){

	double x=0,y=0;
	string s1,s2;
	int flag=0;
	for(int i=0;i<word.length();i++){
		if(word[i]==':') flag=1;
		if(flag!=1)
			s1+=word[i];
		else{
			if(word[i]!=':')
				s2+=word[i];
		}
	}
	stringstream ss1(s1);
	stringstream ss2(s2);

	ss1>>x;
	ss2>>y;

	if(x==0) return y;
	if(y==0) return x;
	return (x*y);
}

int main(){

	string str;
	cin>>str;

	stringstream ss(str);
	string word;

	double sum=0;
	while(getline(ss,word,','))
		sum+=getSum(word);

	cout<<sum;

	return 0;
}