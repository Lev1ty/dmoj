#include <bits/stdc++.h>
using namespace std;
deque<int>v[3];
int ar[3];
bool done(){
    for(auto&a:v)
        if(!a.empty())
            return 0;
    return 1;
}
int main(){
    freopen("Text.txt","r",stdin);
    for(int&i:ar)cin>>i;
    for(int i=0;i<3;i++){
        v[i].resize(ar[i]);
        for(int&j:v[i])cin>>j;
    }
    for(int i=1;!done();i++){
        if(i%30==0){
            pair<int,int> s[3];
            for(int j=0;j<3;j++)
                s[j]=make_pair(v[j].size(),j);
            sort(s,s+3);
            if(!(s[0].first==s[1].first
                 ||s[1].first==s[2].first)){
                int a=v[s[0].second].back(),
                    b=v[s[2].second].back();
                v[s[0].second].pop_back();
                v[s[2].second].pop_back();
                v[s[0].second].push_back(b);
                v[s[2].second].push_back(a);
            }
        }
        for(int j=0;j<3;j++){
            v[j].front()--;
            if(v[j].front()==0)
                v[j].pop_front();
        }
        if(done())cout<<i<<'\n';
    }
}
