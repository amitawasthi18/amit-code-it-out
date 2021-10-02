#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n,x,s=0,cnt=0;
    cin>>n>>x;
     map<ll,ll>mp;
     mp.insert({0,1});
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        s+=a[i];
        mp[s]=1;
        ll ans=s-x;
        if(mp.find(ans)!=mp.end())
        cnt++;
        
    }
    cout<<cnt<<endl;
   
    
}