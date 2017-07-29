#include <bits/stdc++.h>
using namespace std;
long long ans, cnt=2; string s;
int main(){
    freopen("Text.txt","r",stdin);
    while(cnt--){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9')ans+=int(s[i]-'0')*pow(16,s.size()-i-1);
            else if(toupper(s[i])>='A'&&toupper(s[i])<='F')ans+=int(toupper(s[i])-'A'+10)*pow(16,s.size()-i-1);
        }
    }
    cout<<(ans>0x3F3F3F3F?"Yes":"No")<<'\n';
}
