// Program to Check If a Point Lies Inside the Circle or Not
// Given Coordinate of Centre and Radius of Circle and Coordinate of Point
// The Idea is to Find Distance of that Point from the Centre, and if that Distance is Less than Radius
// then the Point Lies Inside the Circle Else Not

#include<bits/stdc++.h>
using namespace std;

bool isInside(int x, int y, int cx, int cy, int r){

	if(pow(x-cx,2)+pow(y-cy,2)<=r*r) return true;
	return false;
}

int main(){

	int x,y,cx,cy,r;
	x=1;y=1;cx=0;cy=2;r=2;
	if(isInside(x,y,cx,cy,r)) cout<<"Yes!";
	else cout<<"No!";

	return 0;
}