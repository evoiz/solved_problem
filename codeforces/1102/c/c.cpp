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
#define ll long long
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
ll nn,xx,yy,a[N],tmp;
int main(){
   scll(nn);
   scll(xx);
   scll(yy);
   read_arr_ll(a,0,nn);
    if(xx>yy){printf("%lld",nn);return 0;}
    for(ll i=0;i<nn;i++){tmp+=(a[i]<=xx);}
    if(tmp%2==1){printf("%lld\n",tmp/2+1);return 0;}
    printf("%lld\n",tmp/2);
    return 0;
}
