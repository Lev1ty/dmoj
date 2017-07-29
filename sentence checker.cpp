#include <bits/stdc++.h>
using namespace std;
int n; string s, ts; set<string>st;
int main(){
    freopen("Text.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++){
        getline(cin,s);
        st.insert(s);
    }
    s.clear();
    while(getline(cin,ts))s+=ts;
    stringstream ss(s);
    while(ss>>s)
        if(!st.count(s)){
            cout<<"Incorrect";
            return 0;
        }
    cout<<"Correct";
}
