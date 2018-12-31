// Program to Add Two Large Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){

	string s1,s2,s3;
	int a[100],b[100];

	memset(a,-1,sizeof(a));
	memset(b,-1,sizeof(b));

	cin>>s1>>s2;

	if(s1.length() != s2.length()){
		if(s1.length() < s2.length())
			swap(s1,s2);

		int x=s1.length()-s2.length();
		while(x--)
			s3+='0';
	}
	
	s2=s3+s2;

	for(int i=0;i<s1.length();i++){
		a[i]=s1[i]-'0';
		b[i]=s2[i]-'0';
	}
	int n;
	for(int i=0;a[i]!=-1;i++)
		n++;

	int carry=0,sum=0,j=0,x;
	stack <int> S;

	for(int i=n-1;i>=0;i--){
		x=a[i]+b[i]+carry;
		if(x>=10){
			carry=1;
			S.push(x%10);
		}
		else{
			carry=0;
			S.push(x);
		}
	}
	if(carry==1)
		S.push(1);

	while(!S.empty()){
		cout<<S.top();
		S.pop();
	}

	return 0;
}