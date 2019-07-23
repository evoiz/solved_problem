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
using namespace std;
const int N=(2e5)+10;
const ll mod=1000000007ll;
ll a[N],ans=1,n;
int main(){
scll(n);
for(int i=0;i<n;i++){scll(a[i]);}
for(int l=0,r=0;l<n;l++){
    for(r=l;r+1<n && a[r+1]<=2ll*a[r] ;){
       r++;
       ans=max(ans,r-l+1ll);
    }
    l=r;
}
cout<<ans<<endl;
return 0;
}/*
**/
