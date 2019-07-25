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
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=3e5+10;
int a=1e9+10,b,c=1e9+10,n,m;
int main(){
	sc(n);sc(m);
	loop(i,1,n){int tmp;sc(tmp);a=min(a,tmp);b=max(b,tmp);}
	loop(i,1,m){int tmp;sc(tmp);c=min(c,tmp);}
	//cout<<a<<" "<<b<<" "<<c<<endl;
	printf("%d\n",max(2*a,b)<c?max(2*a,b):-1);
}
