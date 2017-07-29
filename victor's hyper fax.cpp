#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fax(I, N) for(ll I=0;I<N;I++)
#define Fax1(I, N) for(ll I=1;I<=N;I++)
#define mp make_pair
#define F first
#define S second
#define INF 0x3f3f3f3f3f3f3f3f
ll n;
pair<ll, ll> hse[2005];
ll dp[2005][2005][2], pre[2005];
int main() {
	Fax(i, 2005)Fax(j, 2005)Fax(k, 2)dp[i][j][k]=-INF;
	scanf("%lld", &n);
	ll x, y;
	hse[0]=mp(-INF, -INF);
	Fax1(i, n){
		scanf("%lld%lld", &x, &y);
		hse[i]=mp(x, y);
	}
	sort(hse, hse+n+1);
	ll st, ans=0;
	Fax1(i, n)if(hse[i].F==0)st=i;
	Fax1(i, n)pre[i]=pre[i-1]+hse[i].S;
	ans=hse[st].S;
	dp[st][st][0]=ans;
	dp[st][st][1]=ans;
	for(ll i=st;i>0;i--){
		for(ll j=st;j<=n;j++){
			if(dp[i+1][j][0]-(hse[i+1].F-hse[i].F)>=0)
                dp[i][j][0]=max(dp[i+1][j][0]-(hse[i+1].F-hse[i].F)+hse[i].S, dp[i][j][0]);
			if(dp[i+1][j][1]-(hse[j].F-hse[i].F)>=0)
                dp[i][j][0]=max(dp[i+1][j][1]-(hse[j].F-hse[i].F)+hse[i].S, dp[i][j][0]);
			if(dp[i][j-1][1]-(hse[j].F-hse[j-1].F)>=0)
                dp[i][j][1]=max(dp[i][j-1][1]-(hse[j].F-hse[j-1].F)+hse[j].S, dp[i][j][1]);
			if(dp[i][j-1][0]-(hse[j].F-hse[i].F)>=0)
                dp[i][j][1]=max(dp[i][j-1][0]-(hse[j].F-hse[i].F)+hse[j].S, dp[i][j][1]);
			if(dp[i][j][0]>=0||dp[i][j][1]>=0)
                ans=max(pre[j]-pre[i-1], ans);
			//cout<<hse[i].F<<" "<<hse[j].F<<" "<<dp[i][j][0]<<" "<<dp[i][j][1]<<endl;
		}
	}
	printf("%lld\n", ans);
	return 0;
}
