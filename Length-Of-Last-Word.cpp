// Program to Find Length of Last Word of a String
// "Hello World  " => Last Word ("World") Return 5
// There can be Trailing Spaces Also

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str = " Hello World  ";

	int count=0;
	for(int i=str.length()-1;i>=0;i--){
		if(!isspace(str[i])) count++;
		else if(count!=0) break;
	}
	cout<<count;

	return 0;
}