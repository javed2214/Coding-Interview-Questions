// Program to Check If Given Point Lies Inside Rectangle or Not
// Area of Rectangle = Sum of Area of two Triangles
// Area of Triangle = [x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
// https://www.geeksforgeeks.org/check-whether-given-point-lies-inside-rectangle-not/

#include<bits/stdc++.h>
using namespace std;

double calArea(int x1, int y1, int x2, int y2, int x3, int y3){

	double a=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
	return a;
}

bool Check(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x, int y){

	double A=calArea(x1,y1,x2,y2,x3,y3) + calArea(x1,y1,x4,y4,x3,y3);

	double A1=calArea(x,y,x1,y1,x2,y2);
	double A2=calArea(x,y,x2,y2,x3,y3);
	double A3=calArea(x,y,x3,y3,x4,y4);
	double A4=calArea(x,y,x1,y1,x4,y4);

	if(A==(A1+A2+A3+A4)) return true;
	return false;
}

int main(){

	if(Check(0,10,10,0,0,-10,-10,0,10,15)) cout<<"Yes!";
	else cout<<"No!";

	return 0;
}