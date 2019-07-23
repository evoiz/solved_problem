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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;

int t,n,m,x,y,ans;

int mask[25];

vector<int>v;

void f(int pos){
    if (pos==n+1){
        int cnt=0;
        if (v.sz())
        cnt=mask[v[0]];
        for (int i=1;i<v.sz();i++){cnt&=mask[v[i]];}
        int blah=__builtin_popcount(cnt)+(int)v.sz();
        ans=max(ans,blah);
        return;
    }
    bool check=1;
    v.pb(pos);
    f(pos+1);
    v.pop_back();
    f(pos+1);
}

int main()
{
    cin >> t;
    while(t--){
        memset(mask,0,sizeof mask);
        ans=0;
        v.clear();
        cin >> n >> m;
        for (int i=0; i<m; i++){cin >> x >> y;mask[x]+=(1<<y);}
        f(1);
        cout << ans <<endl;
    }
    return 0;
}
