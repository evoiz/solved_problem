#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ld  pi=acos(-1);
ld le,c1,c2,xa,xb,ya,yb,ra,rb,d;
void far(){
ld c1=acos(((ra + rb)*(ra - rb)+(d*d))/(2.0*d*ra));
ld c2=acos(((rb + ra)*(rb - ra)+(d*d))/(2.0*d*rb));
ld a1 =(ra*ra)*(c1-0.5*sin(2*c1));
ld a2 =(rb*rb)*(c2-0.5*sin(2*c2));
ld ans=a1+a2;
cout<<setprecision(12)<<fixed<<ans<<endl;
}
int main(){
cin>>xa>>ya>>ra>>xb>>yb>>rb;
d=hypot(xa-xb,ya-yb);
if(d>=(ra+rb)){cout<<0.0<<endl;return 0;}
if(max(rb,ra)>=d+(min(ra,rb))){
    ld ans=min(ra,rb);
    ans=ans*ans*pi;
    cout<<setprecision(12)<<fixed<<ans<<endl;
    return 0;
}
cerr<<"here\n";
far();
}
/**
0 0 4
6 0 4
**/
