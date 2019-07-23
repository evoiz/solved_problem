#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10;
int n,k,tmp,ans;
pair<int,pair<int,int> > a[N];
string s;
bool com(pair<int,pair<int,int> > aa,pair<int,pair<int,int> > bb){
if(aa.F!=bb.F){return aa.F>bb.F;}
if(aa.S.F!=bb.S.F){return aa.S.F<bb.S.F;}
if(aa.S.S!=bb.S.S){return aa.S.S>bb.S.S;}
}
int main(){
cin>>n>>k;
loop(i,0,n-1){sc(tmp);a[i].S.F=tmp;}
loop(i,0,n-1){sc(tmp);a[i].S.S=tmp;a[i].F=a[i].S.F-a[i].S.S;}
sort(allr(a,n));
loop(i,0,n-1){
if(a[i].F<0){k--;ans+=a[i].S.F;continue;}
if(k<=0){ans+=a[i].S.S;continue;}
ans+=a[i].S.F;
k--;
}
printf("%d\n",ans);
}
