// Program to Find Sum of All the Elements having Prime Frequency

#include<bits/stdc++.h>
using namespace std;

void primeSeive(bool *prime){

	prime[0]=prime[1]=false;
	for(int i=2;i*i<10001;i++){
		if(prime[i]){
			for(int j=i*2;j<10001;j+=i)
				prime[j]=false;
		}
	}
}

int main(){

	bool prime[10001];
	memset(prime,true,sizeof(prime));
	primeSeive(prime);

	int a[]={1,2,3,3,2,3,2,3,3};
	int n=sizeof(a)/sizeof(int);

	unordered_map<int,int>Map;

	for(int i=0;i<n;i++)
		Map[a[i]]++;

	int sum=0;
	for(auto it:Map){
		if(prime[it.second])
			sum+=it.first;
	}
	cout<<sum<<"\n";

	return 0;
}