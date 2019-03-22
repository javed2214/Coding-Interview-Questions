// Convert Float string into Float Value
// "12.34" => 12.34

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="1.2";
	stringstream ss(str);

	double x=0;
	ss>>x;

	cout<<"Float Value: "<<x;

	str="1234";
	stringstream sss(str);

	int y=0;
	sss>>y;

	cout<<"\nInteger: "<<y;

	return 0;
}