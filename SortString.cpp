// String Sorting in Descending Order
// Time Complexity :- O(n)
// Space Complexity :- O(1)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	string str="hacker";
	int n=str.length();
	
    int a[26]={0};
	for(int i=0;i<n;i++)
		a[str[i]-'a']+=1;

	for(int i=25;i>=0;i--){
		int x=a[i];
		while(x--)
			cout<<(char)('a'+i); 
	}
	return 0;
}
