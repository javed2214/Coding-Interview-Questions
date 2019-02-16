// Upper to Lower / Lower to Upper STL Function in C++

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	str="Coding is Life";

	transform(str.begin(),str.end(),str.begin(),::tolower);
	cout<<str<<"\n";

	transform(str.begin(),str.end(),str.begin(),::toupper);
	cout<<str;

	return 0;
}