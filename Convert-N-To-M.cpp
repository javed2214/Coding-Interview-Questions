// Two Buttons (Codeforces)
// Two Numbers 'n' and 'm' are Given.
// The Task is to Convert 'n' to 'm' in Minimum Number of Steps.
// Either you can Multiply 'n' by 2 or Subtract 1 from 'n'
// https://codeforces.com/contest/520/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m,cnt=0;
	cin>>n>>m;

	while(n!=m){

		if(m>n){
			if(m%2==0){
				m/=2;
				cnt++;
			}
			else{
				m++;
				cnt++;
			}
		}
		else if(n>m){
			m++;
			cnt++;
		}
	}
	cout<<cnt;

	return 0;
}