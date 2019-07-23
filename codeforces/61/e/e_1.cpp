#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e6+10,oo=1e9;

ll n,a[N],st[4*N],inv[4*N],tmp,x,ans;
ll query(int p,int l,int r,int i,int j){
    if (l>=i&&r<=j){
    return st[p];
    }

    if (l>j||r<i){
    return 0ll;
    }
int mid=(l+r)/2;
ll x=query(2*p,l,mid,i,j);
ll y=query(2*p+1,mid+1,r,i,j);
return 1ll*(x+y);
}

void update(int p,int l,int r,int i,int x){
    if(l==r){
      st[p]+=1ll*x;
        return;
    }
    int mid=(l+r)/2;
    if (i<=mid)update(2*p,l,mid,i,x);
    else update(2*p+1,mid+1,r,i,x);

    st[p]=1ll*(st[p*2]+st[p*2+1]);
}

ll query_in(int p,int l,int r,int i,int j){
    if (l>=i&&r<=j){
    return inv[p];
    }

    if (l>j||r<i){
    return 0ll;
    }
int mid=(l+r)/2;
ll x=query_in(2*p,l,mid,i,j);
ll y=query_in(2*p+1,mid+1,r,i,j);
return 1ll*(x+y);
}

void update_in(int p,int l,int r,int i,int x){
    if(l==r){
      inv[p]+=1ll*x;
        return;
    }
    int mid=(l+r)/2;
    if (i<=mid)update_in(2*p,l,mid,i,x);
    else update_in(2*p+1,mid+1,r,i,x);

    inv[p]=1ll*(inv[p*2]+inv[p*2+1]);
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
tmp=query_in(1,1,N-4,x+1,N-4);
//cerr<<tmp<<endl;
ans+=tmp;
update(1,1,N-4,x,1);
tmp=query(1,1,N-4,x+1,N-4);
update_in(1,1,N-4,x,tmp);
}
printf("%lld\n",ans);
}
/**
10 10
find 1 5
add 5 8
add 6 2
find 4 5
find 4 6
add 2 4
find 2 6
add 6 7
find 1 6
find 7 10

**/
