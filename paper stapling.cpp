#include <bits/stdc++.h>
using namespace std;
struct point{double x, y;};
struct line{double m, b;};
point p[2]; line l[2];
line f(point u){
    return {-u.y/u.x,2*u.y};
}
double g(line u){
    return -pow(u.b,2)/(2*u.m);
}
int main(){
//    freopen("Text.txt","r",stdin);
    cin>>p[0].x>>p[0].y>>p[1].x>>p[1].y;
    for(int i=0;i<2;i++)l[i]=f(p[i]);
//    for(auto&a:l)cout<<a.m<<' '<<a.b<<'\n';
    cout<<fixed<<setprecision(9);
    if(l[0].m*p[1].x+l[0].b>=p[1].y&&(p[1].y-l[0].b)/l[0].m>=p[1].x){
//        cout<<"l[0]\n";
        cout<<g(l[0])<<'\n';
    }else if(l[1].m*p[0].x+l[1].b>=p[0].y&&(p[0].y-l[1].b)/l[1].m>=p[0].x){
//        cout<<"l[1]\n";
        cout<<g(l[1])<<'\n';
    }else{
//        cout<<"else\n";
        double m=(p[1].y-p[0].y)/(p[1].x-p[0].x);
        double b=p[0].y-m*p[0].x;
        cout<<g({m,b})<<'\n';
    }

}
