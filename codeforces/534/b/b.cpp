#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
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
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e5+10,oo=1e9+10;
ll mem[100][N],v1,v2,d,s;
ll dp(int pos,int last){
if(pos==s-1){
        if(abs(last-v2)<=d){return 1ll*v2;}
        return -oo;
}
if(mem[pos][last]!=-1){return  mem[pos][last];}
ll ans=-oo;
for(ll i=max(last-d,0ll);i<=last+d;i++){ans=max(ans,1ll*i+dp(pos+1,i));}
return mem[pos][last]=ans;
}
void path(int pos,int last){
if(pos==s-1){
        if(abs(last-v2)<=d){printf("%d\n",last); return;}
        printf("%d\n",-oo);
        return ;
}
ll res=dp(pos,last);
ll ans=-oo;
for(ll i=last-d;i<=last+d;i++){
        ans=max(ans,i+dp(pos+1,i));
        if(ans==res){printf("%d ",i);path(pos+1,i);return ;}
}
}
int main(){
me(mem,-1);
scll(v1);scll(v2);scll(s);scll(d);
ll ans=v1+dp(1,v1);
///path(1,v1);
printf("%lld\n",ans);
}
