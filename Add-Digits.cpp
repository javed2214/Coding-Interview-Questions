// Given a non-negative Integer, Repeatedly Add All its Digits until the Result has only one Digit.
// 38 => 3+8=11 => 1+1=2
// https://leetcode.com/problems/add-digits/
// Recursive Approach

#include<bits/stdc++.h>
using namespace std;

int addDigits(int n){
	if(n>=0 and n<10) return n;
	return addDigits(n/10 + n%10);
}

int main(){

	int n=229;
	cout<<addDigits(n);
}