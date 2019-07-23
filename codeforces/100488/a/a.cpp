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
double pi=acos(-1);
double a,b,c,r,A,R,p,ans;
int main(){
    cin>>a>>b>>c>>r;
    p=(a+b+c)/2;
    A=sqrt(p*(p-a)*(p-b)*(p-c));
    R=A/p;
    ans=(((r*r)/(R*R))*A)-(r*r*pi);
    ans=1-ans/A;
    cout<<setprecision(10)<<fixed<<ans<<endl;
}
