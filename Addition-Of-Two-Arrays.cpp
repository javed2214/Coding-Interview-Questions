// Program to Add Numbers Represented by Two Arrays/Vectors

#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int>a,b,sum;
	a={1,2,3};
	b={9,0};
	int i,j;
	i=a.size()-1;
	j=b.size()-1;
	int s=0,carry=0;

	while(i>=0 and j>=0){
		s=a[i]+b[j]+carry;
		sum.push_back(s%10);
		carry=s/10;
		i--;j--;
	}
	while(i>=0){
		s=a[i]+carry;
		sum.push_back(s%10);
		carry=s/10;
		i--;
	}
	while(j>=0){
		s=b[j]+carry;
		sum.push_back(s%10);
		carry=s/10;
		j--;
	}
	if(carry) sum.push_back(carry);

	reverse(sum.begin(),sum.end());

	for(auto it:sum) cout<<it;

	return 0;
}