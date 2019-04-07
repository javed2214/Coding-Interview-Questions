
// Remove All Occurrences of a Character from a String

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100000000

int main(){

	string str="afsgafsgasagsa";
	str.erase(remove(str.begin(),str.end(),'a'),str.end());

	cout<<str;

	return 0;
}
