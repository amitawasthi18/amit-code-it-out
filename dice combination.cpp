#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int MOD=1e9+7;
int main() {
    ll n;
    cin>>n;
    int  dp[n+1]={0};
    dp[0]=1,dp[1]=1;
    for(ll i=2;i<=n;i++)
    {
      for(ll j=1;j<=6;j++)
      {
          if(i>=j)
          dp[i]=((dp[i]%MOD)+(dp[i-j]%MOD))%MOD;
      }
    }
    
    cout<<dp[n]%MOD<<endl;
    
    
    
    
}