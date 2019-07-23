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
#define ii pair < int , int >
#define LS pair < ll , string >
using namespace std;
const int N=1e6+10,M=1e3+10;
int a[100],n;
bool btc(int ind,int sum){
if(ind==n){return (sum%360)==0;}
return btc(ind+1,(sum+a[ind])%360)||btc(ind+1,(sum-a[ind])%360);
}
int main(){
sc(n);
read_arr(a,0,n);
cout<<(btc(0,0)?"YES\n":"NO\n");
}