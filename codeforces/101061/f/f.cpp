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
#define ii pair<int,int>
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e4+5,mod=1e9+7;
map< pair<int ,int >, int> mem;
int a[103],n,t;
int dp(int ind,int last){
if(ind==n){return abs(last);}
if(mem.find(make_pair(ind,last))!=mem.end()){return mem[{ind,last}];}
int abs_last=abs(last);
int aa=max(abs_last,dp(ind+1,last+a[ind]));
int bb=max(abs_last,dp(ind+1,last-a[ind]));
int ret=min(aa,bb);
return mem[{ind,last}]=ret;
}
int main(){
scll(t);
while(t--){
mem.clear();
sc(n);
read_arr(a,0,n);
ll ans=dp(0,0);
printf("%d\n",ans);
}

}
/**
1 3 4 5 7 9
2 6 8 10 14
1
3
4
5
7
1 2 1 1 1 2 1 2 1
**/
