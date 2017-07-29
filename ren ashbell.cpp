#include <bits/stdc++.h>
using namespace std;
int n, i; vector<int>v;
int main(){
    cin>>n;
    while(n--){
        cin>>i;
        v.push_back(i);
    }
    n=v.front();
    v.erase(v.begin());
    sort(v.begin(),v.end());
    cout<<(n>v.back()?"YES":"NO")<<'\n';
}
