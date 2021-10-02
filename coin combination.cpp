#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int MOD=1e9+7;

int main() {
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll dp[x+1]={0};
    dp[0]=1;
    for(ll i=0;i<=x;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i>=a[j])
            dp[i]=(dp[i]%MOD+dp[i-a[j]]%MOD)%MOD;
            
        }
    }
    cout<<dp[x]%MOD;
    
    
    
    
    
    
}