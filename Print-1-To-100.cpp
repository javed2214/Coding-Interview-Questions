// Program to Print 1 to 100 Without Loops, Recursion, Goto etc.

#include<bits/stdc++.h>
using namespace std;

class Print100{

public:

	Print100(){
		static int c=1;
		cout<<c++<<" ";
	}
};

int main(){
	
	Print100 obj[100];

	return 0;
}