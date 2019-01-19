// Program to Reverse Each Word of a String

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	string str="Coding is Life";
	int j,i;
	for(int i=0;i<str.length();i++){
		if(str[i]==' ' or i==str.length()-1){
			if(i==str.length()-1) j=i;
			else j=i-1;
			while(j!=-1 and str[j]!=' ')
				cout<<str[j--];
			cout<<" ";
		}
	}

	return 0;
}