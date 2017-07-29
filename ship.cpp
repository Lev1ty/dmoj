#include <bits/stdc++.h>
using namespace std;
string s;
unordered_map<char,bool>m({{'B',0},{'F',0},{'T',0},{'L',0},{'C',0}});
array<char,5>ar={'B','F','T','L','C'};
bool flag;
int main(){
    freopen("Text.txt","r",stdin);
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0;i<ar.size();i++)
        if(!binary_search(s.begin(),s.end(),ar[i]))
            m[ar[i]]=1;
    for(auto c:ar)
        if(m[c]==1){
            flag=1;
            cout<<c;
        }
    if(!flag)cout<<"NO MISSING PARTS";
    cout<<'\n';
}
