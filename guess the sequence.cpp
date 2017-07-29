#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    while(1){
        for(int i=1;i<=3;i++){
            cout<<i<<'\n';
            getline(cin,s);
            if(s=="YES")break;
            else if(s=="NO")continue;
            else return 0;
        }
    }
}
