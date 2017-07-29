#include <bits/stdc++.h>
#define INF 0x3f3f3f3f3f3f3f3f
using namespace std;
using ll=long long;
ll n,s,ans,ps[2005],dp[2005][2005][2]; pair<ll,ll>in[2005];
int main(){
    for(ll i=0;i<2005;i++)
        for(ll j=0;j<2005;j++)
            for(ll k=0;k<2;k++)
                dp[i][j][k]=-INF;
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>in[i].first>>in[i].second;
    in[0]={-INF,-INF};
    sort(in,in+n+1);
    for(ll i=1;i<=n;i++)
        ps[i]=ps[i-1]+in[i].second;
    for(ll i=1;i<=n;i++)
        if(in[i].first==0)
            s=i;
    ans=in[s].second;
    dp[s][s][0]=dp[s][s][1]=ans;
    for(ll i=s;i>=1;i--)
        for(ll j=s;j<=n;j++){
            if(dp[i+1][j][0]-(in[i+1].first-in[i].first)>=0)
                dp[i][j][0]=max(dp[i][j][0],dp[i+1][j][0]-(in[i+1].first-in[i].first)+in[i].second);
            if(dp[i+1][j][1]-(in[j].first-in[i].first)>=0)
                dp[i][j][0]=max(dp[i][j][0],dp[i+1][j][1]-(in[j].first-in[i].first)+in[i].second);
            if(dp[i][j-1][1]-(in[j].first-in[j-1].first)>=0)
                dp[i][j][1]=max(dp[i][j][1],dp[i][j-1][1]-(in[j].first-in[j-1].first)+in[j].second);
            if(dp[i][j-1][0]-(in[j].first-in[i].first)>=0)
                dp[i][j][1]=max(dp[i][j][1],dp[i][j-1][0]-(in[j].first-in[i].first)+in[j].second);
            if(dp[i][j][0]>=0||dp[i][j][1]>=0)
                ans=max(ans,ps[j]-ps[i-1]);
        }
    cout<<ans<<'\n';
}
