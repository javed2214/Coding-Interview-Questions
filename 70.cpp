// Program to Return Character Which has Max Frequency

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="ahgdqwhveqwouwegqwqw";
	int len=str.length();

	int a[123];
	memset(a,0,sizeof(a));
	
	for(int i=0;i<len;i++)
		a[str[i]]++;
	
	int x=distance(a, max_element(a,a+123));
	cout<<(char)x;

	return 0;
}