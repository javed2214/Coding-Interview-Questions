// Program to Reverse Words of a String
// I Love C++ ==>> C++ Love I

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	string ans;
	stack <char> S;
	getline(cin,str);
	int len=str.length();
	int i=len-1;
	int j,k=len;

	while(i--){
		if(str[i]==' '){
			j=i+1;
			while(j!=k){
				cout<<str[j++];
			}
			cout<<" ";
			k=i;
		}
	}
	for(int i=0;i<k;i++)
		cout<<str[i];

	return 0;
}