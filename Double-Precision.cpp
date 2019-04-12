// Double Precision
// setprecision() Function

#include<bits/stdc++.h>
using namespace std;

int main(){

	double x,y,p;
	cin>>x>>y;

	p=x/y;

	cout << fixed << setprecision(15) << p << endl;

	return 0;
}