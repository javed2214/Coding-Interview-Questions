// Find the Largest number with given number of digits and sum of digits

#include<bits/stdc++.h>
using namespace std;

int main(){

	int sum,d;
	cin>>sum>>d;
	int t=sum;
	int x,res=0,s=0;
	while(d--){
		if(sum>=9){
			x=9;
		}else{
			x=sum;
		}
		sum-=x;
		s+=x;
		res=res*10+x;
	}
	if(t>s) cout<<"Not Possible";
	else cout<<res;

	return 0;
}
