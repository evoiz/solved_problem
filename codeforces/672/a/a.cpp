#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
int n,l,h,mid;
int cal(int n){
int ret=0;
for (int i=1;i<=n;i*=10){ret+=(n-i+ 1);}
return ret;
}
int main(){
l=0;h=1380;
sc(n);
while(l<h){
mid=(l+h+1)/2;
if(cal(mid)<n){l=mid;}
else{h=mid-1;}
}
cerr<<l<<endl;
n-=cal(l)+1;
string s=to_string(l+1);
printf("%d",s[n]-'0');
}
/**
5 5
1 2 2 3 3
1 3 2
1 4 2
3 5 3
3 5 1
1 2 1

**/

