// Removing Duplicate Elements from a Sorted Array

#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(int *a, int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            a[j++]=a[i];
    }
    a[j]=a[n-1];
    for(int i=0;i<=j;i++)
        cout<<a[i]<<" ";
}

int main(){
    int a[]={1,2,1,2,3,4,5,3,4,5,6,3,45,6,7,8,8,9,6,8,9};
    int n=sizeof(a)/sizeof(int);
    sort(a,a+n);
    
    removeDuplicate(a,n);

    return 0;
}
