#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace __gnu_pbds;
using namespace std;
const int N=1e6+10;
void open(string in,string out){
freopen(in.c_str(),"r",stdin);
freopen(out.c_str(),"w",stdout);
}
int fr[N],root,L,R,r,l,q,n,t,a[N];
ll cur_ans,ans[N];
struct node{
int l,r,ind;
}qr[N];

bool cmp ( node a , node b ){
if ( a.l/root == b.l/root ) return a.r < b.r ;
return a.l/root < b.l/root ;
}

void add(int ind){
cur_ans+=(2ll*fr[a[ind]]+1)*a[ind];
fr[a[ind]]++;

}
void del(int ind){
cur_ans+=((-2ll*fr[a[ind]]+1))*a[ind];
fr[a[ind]]--;
}

int main(){
sc(n);sc(q);
read_arr(a,1,n);
loop(i,1,q){sc(qr[i].l);sc(qr[i].r);qr[i].ind=i;}
root=(int)sqrt(n);
sort(qr+1,qr+q+1,cmp);
l=1 ;r=0;
for(int i=1;i<=q;i++){
    L = qr[i].l ,R=qr[i].r ;
    while ( r > R ){del(r);r--;}
    while ( r < R ){r++;add(r);}
    while ( l < L ){del(l);l++;}
    while ( l > L ){l--;add(l);}
    ans[qr[i].ind]=cur_ans;
}
for(int i=1;i<=q;i++){
 printf("%lld\n",ans[i]);
}
}
