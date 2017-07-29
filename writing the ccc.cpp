#include <bits/stdc++.h>
using namespace std;
int t,n; unordered_map<string,int>m; vector<pair<int,int>>v;
int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        string s; cin>>s;
        m[s]=i;
    }
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v[i].first=m[s];
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(auto&a:v)cout<<a.second+1<<'\n';
}
