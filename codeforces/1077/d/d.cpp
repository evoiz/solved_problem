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
using namespace std;
int mapa[200005];
vector<ii> res;

int main(){

    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mapa[x]++;
    }
    for(int i = 1; i <= 200000; i++)
        if(mapa[i])
            res.push_back({mapa[i], i});
    sort(res.rbegin(), res.rend());
    int esq = 1, dir = 1e9, aux = 0;
    while(esq <= dir){
        int mid = (esq+dir)/2;
        int cnt = 0;
        for(int i = 0; i < k and i < res.size(); i++)
            cnt += res[i].first/mid;
        if(cnt >= k){
            esq = mid+1;
            aux = max(aux, mid);
        }
        else
            dir = mid-1;
    }
    int cnt = 0;
    for(int i = 0; i < k and cnt < k; i++){
        while(res[i].first >= aux and cnt < k){
            cout << res[i].second << " ";
            res[i].first -= aux;
            cnt++;
        }
    }
    cout << endl;
	return 0;
}