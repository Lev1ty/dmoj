#include <bits/stdc++.h>
using namespace std;
int n, m, a, cnt; pair<int,int> ar[11];
int main(){
    freopen("Text.txt","r",stdin);
    cin>>n>>m>>a;
    for(int i=0;i<a;i++)
        cin>>ar[i].first>>ar[i].second;
    for(int i=1;1;i++){
        if(cnt<a&&i==ar[cnt].first){
            n+=ar[cnt].second;
            cnt++;
        }
        if(n>m){
            cout<<"The printer jams at "<<i<<" second(s).\n";
            return 0;
        }
        n--;
        if(n<=0){
            cout<<"The printer melts at "<<i+1<<" second(s).\n";
            return 0;
        }
    }
}
