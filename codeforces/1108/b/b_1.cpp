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
int a[1000];
int fr[100000];
int n;
int main(){
sc(n);
read_arr(a,0,n);
sort(allr(a,n),greater<int> ());
if(a[0]==a[1]){printf("%d %d",a[0],a[0]);return 0;}
printf("%d ",a[0]);
for(int i=1;i<=n;i++){
 if(a[0]%a[i]!=0){printf("%d",a[i]);return 0;}
 if(fr[a[i]]>=1){printf("%d",a[i]);return 0;}
 fr[a[i]]++;
}

}
