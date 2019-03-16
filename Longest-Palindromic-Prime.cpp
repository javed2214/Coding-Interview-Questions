// Program to Find Longest Palindromic Prime Number

#include<bits/stdc++.h>
using namespace std;
#define N 100001

bool prime[N];

void primeSeive(){
	
	memset(prime,true,sizeof(prime));
	prime[0]=false; prime[1]=false;

	for(int i=2;i*i<N;i++){
		if(prime[i]){
			for(int j=i*2;j<N;j+=i)
				prime[j]=false;
		}
	}
}

bool isPalindrome(int n){

	string str=to_string(n);
	string s=str;
	reverse(str.begin(),str.end());
	return (s==str);
}

int main(){

	primeSeive();
	
	int a[]={5,121,7,11,89,999,9779};
	int n=sizeof(a)/sizeof(int);
	int max=INT_MIN;

	for(int i=0;i<n;i++){
		if(prime[a[i]] and isPalindrome(a[i]) and a[i]>max)
			max=a[i];
	}
	if(max==INT_MIN) cout<<"No Solution!\n";
	else cout<<max<<"\n";

	return 0;
}