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
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
set<int>st;
ll n,m,x,fr[N];
int main(){
    sc(n);sc(m);
    loop(i,0,m-1){
    sc(x);fr[x]++;st.insert(x);
    if (n==st.size()){
    st.clear();
    printf("1");
   loop(i,1,n){fr[i]--;if(fr[i]>=1){st.insert(i);}}continue;
   }
   printf("0");
}
    return 0;
}
/**
a
c
**/