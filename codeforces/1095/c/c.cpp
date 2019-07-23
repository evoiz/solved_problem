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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int  N=1e5+5;
int n, k;
vector <int> vi,anss;
ll po=1;
priority_queue <int> qq;
int main () {
   sc(n);sc(k);
    for (int i = 0; i < 31; i++) {vi.push_back(po);po*= 2ll;}
    ll hh=n;
    while(n){
        int pos = upper_bound(vi.begin(), vi.end(), n) - vi.begin() - 1;
        anss.push_back(vi[pos]);n-=vi[pos];}
    n=hh;
    if(anss.size()>k || k>n) {
    printf("NO"); return 0;\
    }
    printf("YES\n");
    if (anss.size()==k){for (int i : anss) cout << i << " ";return 0;}
    for (int i : anss){qq.push(i);}
    while(qq.size()<k) {int p = qq.top();qq.pop();qq.push(p/2);qq.push(p/2);}
    while (qq.size()) {cout << qq.top() << ' ';qq.pop();}
}
