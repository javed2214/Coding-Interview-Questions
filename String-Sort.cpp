// String Sorting without Using Function
// Bubble Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="sajdakjdahskadkwl";
	int n=str.length();

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(str[j]<str[i])
				swap(str[i],str[j]);
		}
	}
	cout<<str;

	return 0;
}