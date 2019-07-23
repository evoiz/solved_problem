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
#define ii pair<int,int>
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e6+5,MOD=1e9+7;
ll n,t;
int rec(ll x){
if(x%2==1){return 1;}
if(rec(x/2)==1){return 2;}
return 1;
}
int main(){
scll(t);
while(t--){
scll(n);
int ans=rec(n);
if(ans==1){printf("First Box\n");continue;}
printf("Second Box\n");
}

}
/**
1 3 4 5 7 9
2 6 8 10 14
1
3
4
5
7
1 2 1 1 1 2 1 2 1
**/
