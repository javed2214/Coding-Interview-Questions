// Subarray With Given Sum
// Sliding Window Application
// https://www.geeksforgeeks.org/find-subarray-with-given-sum/
// For Non Negative Integers

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    ll t;
    cin>>t;
    
    while(t--){
        
        ll n,k;
        cin>>n>>k;
        
        int head = 1, tail = 0, curr_sum = 0, flag = 0;
        
        ll a[n + 1];

        for(int i=1;i<=n;i++) cin>>a[i];
        
        for(int i=1;i<=n;i++){
            
            curr_sum += a[i];
            
            while(curr_sum > k){
                curr_sum -= a[head];
                head++;
            }
            
            if(curr_sum == k){
                tail = i;
                flag = 1;
                break;
            }
        }
        if(flag) cout<<head<<" "<<tail<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}