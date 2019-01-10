// https://www.codechef.com/problems/XORNUBER

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100001
std::vector<ll> v;

void getPower(){
	for(int i=0;i<=30;i++){
	ll p=pow(2,i);
	v.emplace_back(p);
	}
}

int main(){
	int t;
	FASTREAD;
	cin>>t;
	getPower();
	while(t--){
		ll n;
		cin>>n;
		if(n==1)
			cout<<"2\n";
		else{
			int flag=0;
			for(int i=0;i<=30;i++){
				if(n==(v[i]-1) and flag==0){
					cout<<(v[i]/2-1)<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0) cout<<"-1\n";
		}
	}

	return 0;
}