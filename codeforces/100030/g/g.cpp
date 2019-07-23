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
const int N=1e5,M=1e4+10;
void start(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
}
int k,n,ans[N];
pair<int,int> a[N];
int main(){
start();
sc(k);
sc(n);
loop(i,1,n){sc(a[i].F);a[i].S=i;}
sort(a+1,a+1+n);
loop(i,1,n){
ans[a[i].S]=min(k,a[i].F);
k-=min(a[i].F,k);
}
loop(i,1,n){printf("%d ",ans[i]);}
}



/**
2
4 4
22 7 3 11
3 1 8 9
5 2 4 3
13 5 6 9
3 4
1 2 3 4
5 6 7 8
9 10 11 12

**/
