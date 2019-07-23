#include <bits/stdc++.h>
#define F first
#define S second
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
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10;
int a[N],bb[N],b,k,tmp,ans;

int main(){
sc(b);sc(k);
tmp=1;
for(int i=0;i<k;i++){
sc(a[i]);
a[i]%=2;
bb[i]=tmp;
tmp*=b;
tmp%=2;
bb[i]%=2;
}
reverse(bb,bb+k);
for(int i=0;i<k;i++){ans+=a[i]*bb[i];ans%=2;}
cout<<(ans?"odd\n":"even\n")<<endl;
}
/**
4 2
zzzz
**/
