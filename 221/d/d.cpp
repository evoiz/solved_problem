#include <bits/stdc++.h>
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
using namespace std;
const int N=1e5+10;
int fr[N],ans[N],root=310,cnt=1,cur_ans,L,R,r,l,q,n,a[N],b[N];
map<int,int> mp;
struct node{
int l,r,ind;
}qr[N];

bool cmp ( node a , node b ){
if ( a.l/root == b.l/root ) return a.r < b.r ;
return a.l/root < b.l/root ;
}

void add(int ind){
if(fr[b[ind]]==a[ind]){cur_ans--;}
fr[b[ind]]++;
if(fr[b[ind]]==a[ind]){cur_ans++;}
}
void del(int ind){
if(fr[b[ind]]==a[ind]){cur_ans--;}
fr[b[ind]]--;
if(fr[b[ind]]==a[ind]){cur_ans++;}
}

int main(){
sc(n);sc(q);
read_arr(a,1,n);
loop(i,1,n){
mp[a[i]]++;
}
for(auto &x:mp){x.S=cnt++;}
loop(i,1,n){b[i]=mp[a[i]];}
loop(i,1,q){sc(qr[i].l);sc(qr[i].r);qr[i].ind=i;}
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
 printf("%d\n",ans[i]);
}
}
