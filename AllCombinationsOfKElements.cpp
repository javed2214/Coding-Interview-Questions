// Recursive Program to Print All Possible Combinations of 'k' Elements of given Array

#include<bits/stdc++.h>
using namespace std;

std::vector<vector<int>> res;
std::vector<int> v;

void combinationUtil(int *a, int n, int k, int *d, int index, int i){

    if(index==k){
        for(int j=0;j<k;j++)
            v.push_back(d[j]);
        res.push_back(v);
        v.clear();
        return;
    }
    if(i>=n) return;

    d[index]=a[i];
    combinationUtil(a,n,k,d,index+1,i+1);
    combinationUtil(a,n,k,d,index,i+1);
}

void getCombination(int *a, int n, int k){

    int d[k];
    combinationUtil(a,n,k,d,0,0);
}

int main(){

    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int k=3;
    getCombination(a,n,k);

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
