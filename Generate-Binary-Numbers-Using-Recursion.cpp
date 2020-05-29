// Generate Binary Numbers from 0 to 2^N using Recursion

#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

bool check(string s){

    for(auto it: s)
        if(it == '?') return false;
    
    return true;
}

void go(string s, int index){

    if(check(s)){
        cout << s << ": " << cnt << endl;
        cnt += 1;
        return;
    }

    if(s[index] == '1' or s[index] == '0') go(s, index + 1);

    if(s[index] == '?'){
        s[index] = '0';
        go(s, index + 1);
        s[index] = '1';
        go(s, index + 1);
    }
}

int main(){

    int n;
    cin >> n;

    string s;
    for(int i = 0; i < n; i++) s += "?";

    go(s, 0);
}