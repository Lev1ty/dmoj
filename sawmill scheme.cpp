#include <bits/stdc++.h>
using namespace std;
vector<int>v[1000005];
double dp[1000005];
int n,m;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0,j,k;i<m;i++){
        cin>>j>>k;
        v[j].push_back(k);
    }
    dp[1]=1;
    for(int i=1;i<=n;i++)
        for(int j:v[i])
            dp[j]+=dp[i]/v[i].size();
    cout<<fixed<<setprecision(9);
    for(int i=1;i<=n;i++)
        if(v[i].empty())
            cout<<dp[i]<<'\n';
}
