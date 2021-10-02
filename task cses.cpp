#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll cnt=0,j=0;
    vector<ll>v;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back(a);
        cnt+=b;
    }
    sort(v.begin(),v.end());
    ll k=v.size();
    while(k>=1&&j<v.size())
    {
        cnt-=(k*v[j]);
        k--;
        j++;
    }
    cout<<cnt<<endl;
    
}