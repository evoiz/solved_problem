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
ll la,lb,ra,rb;
ll q;
int main(){
scll(q);
while(q--){
scll(la);scll(ra);
scll(lb);scll(rb);
if(lb>ra){cout<<ra<<" "<<lb<<endl;continue;}
if(lb<ra){cout<<ra<<" "<<lb<<endl;continue;}
if(la!=lb&&lb==ra){cout<<la<<" "<<lb<<endl;continue;}
if(ra==rb&&la==lb){cout<<la<<" "<<ra<<endl;continue;}
}
}
