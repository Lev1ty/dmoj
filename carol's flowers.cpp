#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll f,n,s;
vector<ll>v;
constexpr ll mod=1000000007;
int main(){
    freopen("Text.txt","r",stdin);
    cin>>f>>n;
    v.resize(f);
    for(ll&i:v)cin>>i;
    sort(v.begin(),v.end());
    for(ll i=n-1,j=1;i>=0;i--,j++)
        s=s%mod+(ll)pow(v[i]%mod,j)%mod;
    cout<<s;
}
