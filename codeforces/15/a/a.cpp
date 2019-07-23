#include <iostream>
#include <stdio.h>
#include  <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll unsigned long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e3+10;
pair<double ,double> p[N];
int n,t;
double a,b;
int main (){
cin>>n>>t;
loop(i,0,n-1){
cin>>a>>b;
p[i].F=1.0*a-b/2.0;
p[i].S=1.0*a+b/2.0;

}
sort(p,p+n);
int ans=0;
for(int i=1;i<n;i++){
ans+=((p[i].F-p[i-1].S)==t);
ans+=2*((p[i].F-p[i-1].S)>t);
}
cout<<2+ans<<endl;
}
