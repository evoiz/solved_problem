#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e6+10,oo=1e9;

ll n,a[N],bit[N],inv[N],x,tmp,ans;

void update(ll val,int index){
while(index<=(N-4)){
bit[index]+=1ll*val;
index+=(index & -index);
}
}

ll query(int index){
ll sum = 0;
while(index > 0){
sum+=bit[index];
index-=(index & -index);
}
return 1ll*sum;
}

void update_in(ll val,int index){
while(index<=(N-4)){
inv[index]+=1ll*val;
index+=(index & -index);
}
}

ll query_inv(int index){
ll sum = 0;
while(index > 0){
sum+=inv[index];
index-=(index & -index);
}
return 1ll*sum;
}

map<ll,int>mp;
int main(){
scanf("%lld",&n);
for(int i=1;i<=n;i++){scanf("%lld",a+i);mp[a[i]]++;}
int co=1;
for(auto k:mp){
mp[k.F]=co;
co++;
}
for(int i=1;i<=n;i++){
x=mp[a[i]];
tmp=query_inv(N-4)-query_inv(x);
ans+=tmp;
//cerr<<tmp<<endl;
update(1,x);
tmp=query(N-4)-query(x);
update_in(tmp,x);
}
printf("%lld\n",ans);
}
/**
4
1 5 4 3
**/
