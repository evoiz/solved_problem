#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e3+10,oo=1e9+7,mod=1e9+7;
ll n,l,t,a[1020];
int main(){
scanf("%lld",&t);
while(t--){
    scanf("%lld%lld",&l,&n);
    memset(a,0,sizeof a);
    if(n==1){printf("%lld\n",l);continue;}
    ll h=2ll*n-2ll;
    /**
    cerr<<l << " "<<h<<endl;
    if(l<h){
        ll emp=1;
        for(int i=0;i<l;i++){
            if(emp>n){emp=1;}
            a[emp]+=1ll;
            emp++;
        }
    }**/
    ll mod=1ll*l%h;
    ll tmp=1ll*l/h;
    a[1]=tmp;a[n]=tmp;
    for(int i=2;i<=n-1;i++){a[i]=2ll*tmp;}
    ll emp=1ll,op=1;
    for(int i=0;i<mod;i++){
            cerr<<emp<<endl;
            if(emp==n){op=-1;a[n]+=1ll;emp=n-1;continue;}
            if(emp==1){op=+1;a[1]+=1ll;emp=2;continue;}
            a[emp]+=1ll;
            emp+=op;
    }
    for(int i=1;i<=n;i++){printf("%lld ",a[i]);}
    printf("\n");
}

}
/**
1000
5 4
2 1 1 1
ans=
1 1 2 1

1 2 3 2 1 2 3 2

**/
