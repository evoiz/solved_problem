#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
pair<ld,int> p[N];
int x,y,a,b,n;
ld pi=acos(-1);
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    ld tmp=(ld)atan2(y,x);
    p[i]={tmp,i+1};
}
sort(p,p+n);
ld mn=2.0*pi;
for(int i=0;i<n-1;i++){
   ld tmp=p[i+1].F-p[i].F;
    ///cerr<<tmp<<endl;
    if(tmp<mn){mn=tmp;a=p[i+1].S;b=p[i].S;}
}
ld tmp=p[0].F-p[n-1].F+2.0*pi;
if( mn > tmp){a=p[0].S;b=p[n-1].S;}
cout<<a<<" "<<b<<endl;
}
/**

5 6 4
******
*..*.*
******
*....*
******
2 2
2 3
2 5
4 3

**/
