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
int t,n,k,a[5];

vector<int>v;

int main(){
    sc(t);
    while(t--){
        int ans=0;
        v.clear();
        sc(n);sc(k);
        for (int j=0; j<n; j++){
            read_arr(a,0,3);
            sort(a,a+3);
            v.push_back(a[0]);
            v.push_back(a[1]);
        }
        sort(v.begin(),v.end());
        for (int i=0;i<k;i++){ans+=v[i];}
        printf("%d\n",ans);
    }
    return 0;
}
