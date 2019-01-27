// Program to pass Function Pointer as a Parameter

#include<bits/stdc++.h>
using namespace std;

void fun1(){
	cout<<"fun1() is Called\n";
}
void fun2(){
	cout<<"fun2() is Called\n";
}
void wrapper(void (*fun_ptr)()){
	fun_ptr();
}

int main(){
	
	wrapper(fun1);
	wrapper(fun2);

	return 0;
}