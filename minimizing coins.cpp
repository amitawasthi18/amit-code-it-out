#include<bits/stdc++.h>
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
    dp[0]=0;
    for(ll i=1;i<=x;i++)
    {
        dp[i]=INT_MAX;
        for(ll j=0;j<n;j++)
        {
            if(i>=a[j])
            dp[i]=min(dp[i],dp[i-a[j]]+1);
        }
    }
    if(dp[x]==INT_MAX)
    cout<<-1;
    else
    cout<<dp[x];
    
    
    
    
    
    
}