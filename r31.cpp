// Program to Count Occurrence of pattern in Main String

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	string text="abcdefghdede";
	string pat="de";
	int x=text.size();
	int y=pat.size();
	int p=x-y;
	int c=0,j,k=0;
	int flag=0;
	bool found;

	for(int i=0;i<=p;i++){
		if(pat[0]==text[i]){
			j=i;flag=0,k=0;
			while(k<y){
				if(pat[k++]!=text[j++]){
					flag=1;
					break;
				}
			}if(flag==0) c++;
		}
	}
	cout<<c;

	return 0;
}