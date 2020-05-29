// Replace '?' by 1 and 0
// Asked in Goldman Sachs

// Input : 1??0
// Output : 1000, 1010, 1100, 1110

#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    for(auto it: s)
        if(it == '?') return false;
    return true;
}

void go(string s, int index){

    if(check(s)){
        cout << s << endl;
        return;
    }

    if(s[index] == '0' or s[index] == '1') go(s, index + 1);

    if(s[index] == '?'){
        s[index] = '0';
        go(s, index + 1);
        s[index] = '1';
        go(s, index + 1);
    }
}

int main(){

    string s;
    cin >> s;

    go(s, 0);

    return 0;
}