#include <iostream>
#include <stdio.h>
#include  <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
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
const int N=1e6+10;
ll n,a [N],gcd;
int main() {
scll(n);
read_arr_ll (a,0,n);
for (int i=0;i <n/2;i++){
   if (a [i]==a [n-i-1]) continue; 
   gcd=__gcd (gcd,abs (a[i]-a [n-i-1]));
}
if (gcd==0){printf ("-1");return 0;}
printf ("%lld\n",gcd);
}