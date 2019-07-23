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
#define INF 9999999999
#define MOD 1000000007
#define maxn 1005000
#define m5 100005
#define maxm 1011
using namespace std;
const int N=2e5+10;
vector <long> save;
ll x[N] ;
map <ll, ll> M ;
long n, a[N];
ll ans = -MOD;
ll top = 0;
int main(){
    cin >> n;
    for ( ll i = 1 ; i <= n ; i ++ ){
        cin >> x[i];
        if (M[x[i]] == 0 ) save.pb(x[i]);
        M[x[i]]++;
    }

    for (auto v : save)
        a[++top] = M[v];
    sort(a+1, a+top+1);

    loop(1,a[top],1){
        ll res = 0;
        int p = 0;
        for ( long j = i; j <= a[top] ; j = j * 2 )
        {
            long pos = lower_bound ( a+p+1, a+top+1, j) - a;
            if (pos == top + 1 ) break;
            p = pos , res += j ;
        }
        ans = max(ans, res) ;
    }
    cout << ans;
    return 0;
}