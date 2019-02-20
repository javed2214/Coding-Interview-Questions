// Program to Add 1 to an Array

#include<bits/stdc++.h>
using namespace std;

std::vector<int> addOne(std::vector<int> &v){

	int sum=0,car=0;
	std::vector<int> x;
	int r=v.size()-1;
	sum+=v[r]+1;
	while(r>=0){
		if(sum>=10) x.push_back(sum%10);
		else x.push_back(sum);
		car=sum/10;
		sum=car;
		r--;
		sum+=v[r];
	}	
	if(car) x.push_back(car);

	return x;
}

int main(){

	std::vector<int> v={9,9,9,9};
	v=addOne(v);
	reverse(v.begin(),v.end());
	for(auto it:v) cout<<it;

	return 0;
}