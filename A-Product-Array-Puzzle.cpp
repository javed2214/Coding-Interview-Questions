// A Product Array Puzzle
// Given an Array a[]. Find product[i] such that Product of all the Elements except a[i].
// Without Using Division Operator

#include<bits/stdc++.h>
using namespace std;

// Using Prefix and Suffix Array
void method1(int *a, int n){

    int prefix[n], suffix[n];

    prefix[0] = 1;
    suffix[n-1] = 1;

    for(int i=1;i<n;i++) prefix[i] = prefix[i-1] * a[i-1];
    for(int i=n-2;i>=0;i--) suffix[i] = suffix[i+1] * a[i+1];

    for(int i=0;i<n;i++) cout << prefix[i] * suffix[i] << " ";

    cout << endl;
}

// Using Power Function
void method2(int *a, int n){

    int prod = 1;

    for(int i=0;i<n;i++) prod *= a[i];
    for(int i=0;i<n;i++) cout << prod * pow(a[i], -1) << " ";

    cout << endl;
}

// Using Only one Array
void method3(int *a, int n){

    int temp = 1;
    int product[n];

    for(int i=0;i<n;i++){
        product[i] = temp;
        temp *= a[i];
    }

    temp = 1;

    for(int i=n-1;i>=0;i--){
        product[i] *= temp;
        temp *= a[i];
    }

    for(int i=0;i<n;i++) cout << product[i] << " ";

    cout << endl;
}

int main(){

    int a[] = {2,3,6,4,5};
    int n = sizeof(a) / sizeof(int);

    method1(a, n);
    method2(a, n);
    method3(a, n);

    return 0;
}