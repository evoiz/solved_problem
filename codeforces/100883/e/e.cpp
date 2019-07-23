#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll n,q,tmp,t;
struct Trie{
    Trie *zero , *one ;
    int cnt;
    Trie(){one=zero=NULL;cnt=0;}
};

void add(Trie *tr,int bt,int x){
    tr->cnt++;
    if(bt<0)return;
    if(x&(1ll<<bt)){
        if( !tr->one )tr->one=new Trie();
        add(tr->one,bt-1,x);
    }
    else{
        if( !tr->zero )tr->zero=new Trie();
        add(tr->zero,bt-1,x);
    }
}

int get(Trie *tr,int i,ll p){
    if( !tr || i<0 )return 0;

    if(p&(1ll<<i)){
        if((tr->zero)==0 && (tr->one)!=0){return (1ll<<i)+get(tr->one,i-1,p);}
        if((tr->zero)!=0 && (tr->one)==0){return get(tr->zero,i-1,p);}
        return  get(tr->zero,i-1,p);
    }
    else{
       if((tr->zero)==0 && (tr->one)!=0){return (1<<i)+get(tr->one,i-1,p);}
       if((tr->zero)!=0 && (tr->one)==0){return get(tr->zero,i-1,p);}
       return  (1ll<<i)+get(tr->one,i-1,p);
    }
}
void solve(){
   map<ll,ll>mp;
   Trie *root=new Trie();
     scanf("%lld%lld",&n,&q);
     for(int i=0;i<n;i++){
     scanf("%lld",&tmp);add(root,35,tmp);
     mp[tmp]=(mp[tmp]?mp[tmp]:i+1);
     }
     while(q--){
       scanf("%lld",&tmp);
       int ans=mp[get(root,35,tmp)];
       printf("%d\n",ans);
     }
}
int main(){
scanf("%d",&t);
for(int i=0;i<t;i++){
    solve();
   if(i!=t-1){printf("\n");}
}
    return 0;
}
/**
2
4 3
3 1 2 3
4
5
6
3 3
3 1 2
6
5
4
**/
