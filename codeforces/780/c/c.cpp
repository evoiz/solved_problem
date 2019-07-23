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
#define prt(x) printf("%d",x);using namespace std;
using namespace std;
const int N=2e5+10;
vector <int> adj[N];
int ans[N],mx,n,a,b; ;
void dfs(int x,int fa ){
	int c=1;
	for(auto ch:adj[x] ){
        if(ch==fa){continue ;}
		   while(c==ans[x]||c==ans[fa]){c++;}
			ans[ch]=c++;
			mx=max(mx,ans[ch]);
			dfs(ch,x);
	}
}
int main(){
    sc(n);
    for(int i=1;i<n;i++){
    sc(a);sc(b);
    adj[a].push_back(b);
    adj[b].push_back(a);
    }
    ans[1]=1;
    dfs(1,0);
    printf("%d\n",mx);
    for(int i=1;i<=n;i++){printf("%d ",ans[i]);}
return 0;
}
