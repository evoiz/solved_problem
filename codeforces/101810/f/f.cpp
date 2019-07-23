#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const ll N=1e6+10,oo=1e9;
ll mem[N],mx,t,n,sum,a[N];
set<ll> st;
ll seive(){
memset(mem,-1,sizeof mem);
for(auto x:st){
 for(int i=x;i<N;i+=x){
  if(mem[i]==-1){mem[i]=x;continue;}
  mem[i]=min(mem[i],x);
 }
}
ll sum=0ll;
for(int i=0;i<n;i++){sum+=mem[a[i]];}
return sum;
}
int main(){
    scanf("%lld",&t);
    while(t--){
        st.clear();
        scanf("%lld",&n);
        for(int i=0;i<n;i++){scanf("%lld",a+i);st.insert(a[i]);}
        printf("%lld\n",seive());
    }
 return 0;
}
