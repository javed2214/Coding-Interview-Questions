// Program to Convert String into Integer

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="12345238";
	int len,j;
	len=j=str.length();

	int num=0;

	for(int i=0;i<len;i++)
		num+=(str[--j]-'0')*pow(10,i);

	cout<<num;

	return 0;
}