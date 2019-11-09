// Form Minimum from a Given Sequence
// https://www.geeksforgeeks.org/form-minimum-number-from-given-sequence/

// Asked in Amazon

#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	vector <int> v;

	int min_avail = 0, pos_of_I = 0;

	if(s[0] == 'I'){

		v.push_back(1);
		v.push_back(2);
		min_avail = 3;
		pos_of_I = 1;
	}

	else{

		v.push_back(2);
		v.push_back(1);
		min_avail = 3;
		pos_of_I = 0;
	}

	for(int i=1;i<s.length();i++){

		if(s[i] == 'I'){

			v.push_back(min_avail);
			min_avail++;
			pos_of_I = i + 1;
		}
		else{

			v.push_back(v[i]);

			for(int j=pos_of_I;j<=i;j++)
				v[j]++;

			min_avail++;
		}
	}

	for(auto it:v) cout<<it;

	return 0;
}