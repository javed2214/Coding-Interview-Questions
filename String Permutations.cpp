// Program to Print All the String Permutations

#include<bits/stdc++.h>
using namespace std;

void swapp(char *ch1, char *ch2){
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}

void Permutation(char *ch, int l, int r){

	if(l==r)
		cout<<ch<<" ";

	else{
		for(int i=l;i<r;i++){
			swapp((ch+l),(ch+i));
			Permutation(ch,l+1,r);
			swapp((ch+l),(ch+i));
		}
	}
}

int main(){

	char ch[]="ABCD";
	int r=strlen(ch);

	Permutation(ch,0,r);

	return 0;
}
