// "1a2b3c" => 6 (1+2+3)
// "dFD$#23+++12@#T1234;/.,10" => 1279 (23+12+1234+10)
// Asked in LinkedIN

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	cin>>str;

	int count=0,sum=0;
	for(int i=0;i<str.length();i++){
		if(isdigit(str[i])){
			while(isdigit(str[i])){
				count=count*10+(str[i]-'0');
				i++;
			}
			sum+=count;
		}
		count=0;
	}
	cout<<sum;

	return 0;
}