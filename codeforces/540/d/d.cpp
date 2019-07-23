#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define ull unsigned long long
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
const int N=105;
int r=0,s=1,p=2,rr,ss,pp,vis[N][N][N][4];
double mem[N][N][N][4];
double dp(int rr,int ss,int pp,int win){
if(rr+ss+pp==max({rr,ss,pp})){
if(rr!=0){return (win==r);}
if(ss!=0){return (win==s);}
if(pp!=0){return (win==p);}
}
double &ret=mem[rr][ss][pp][win];
if(vis[rr][ss][pp][win]){return ret;}
vis[rr][ss][pp][win]=1;
ret=0.0;
double R=rr*ss;
double S=ss*pp;
double P=pp*rr;
double all=R+S+P;
if(rr!=0 && ss!=0){
ret+=1.0*(R/all)*dp(rr,ss-1,pp,win);
}
if(ss!=0 && pp!=0){
ret+=1.0*(S/all)*dp(rr,ss,pp-1,win);
}
if(pp!=0 && rr!=0){
ret+=1.0*(P/all)*dp(rr-1,ss,pp,win);
}
return ret;
}
int main(){
sc(rr);sc(ss);sc(pp);
loop(i,0,2){
me(vis,0);
cout<<setprecision(9)<<fixed<<dp(rr,ss,pp,i)<<" ";
}

}
