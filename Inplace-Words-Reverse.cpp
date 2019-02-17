// Program to Reverse Words of a String Inplace
// Without using any External Libraries/Functions

#include<bits/stdc++.h>
using namespace std;

void reverseWords(char *, int, int);
void reverseWholeString(char *, int, int);

void reverseWords(char *str, int l, int r){
	
	int p=0;
	for(int i=0;i<=r;i++){
		if(str[i]==' '){
			reverseWholeString(str,p,i-1);
			p=i+1;
		}
		if(i==r)
			reverseWholeString(str,p,i);
	}
}

void reverseWholeString(char *str, int l, int r){
	while(l<r){
		swap(str[l],str[r]);
		l++;
		r--;
	}
}

void helperFunction(char *str, int len){
	reverseWholeString(str,0,len-1);
	reverseWords(str,0,len-1);
}

int main(){

	char str[]={'h','o','r','s','e',' ','a','n','d',' ','d','o','g'};
	int len=sizeof(str)/sizeof(char);
	helperFunction(str,len);

	for(auto it:str) cout<<it;

	return 0;
}