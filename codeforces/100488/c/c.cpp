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
ll k;
vector<ll> dv;
set<ll> ans;
int main(){
scll(k);
for(int i=1;i*i<=k;i++){
 if(i*i==k){dv.push_back(i);continue;}
 if(k%i==0){dv.push_back(i);dv.push_back(k/i);}
}
for(int i=0;i<dv.size();i++){
    for(int j=0;j<dv.size();j++){
        ans.insert(1ll*dv[i]*dv[j]);
    }
}
printf("%d\n",ans.size());
for(auto x:ans){
    printf("%lld %lld\n",x+k,k+(k*k)/x);
}
}
