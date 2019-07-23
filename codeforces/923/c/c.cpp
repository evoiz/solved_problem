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
#define allr(a,n) a,a+n
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
using namespace std;
const int N=3e5+19;
ll n,a[N],tmp;
map<int,int> mp;
struct Trie{
    Trie *zero , *one ;
    int cnt;
    Trie(){
        one=zero=NULL;
        cnt=0;
    }
};
void add(Trie *tr,int bt,int x){
    tr->cnt++;
    if(bt<0)return;
    if(x&(1ll<<bt)){
        if( !tr->one )tr->one=new Trie();
        add(tr->one,bt-1,x);
    }
    else{
        if(!tr->zero)tr->zero=new Trie();
        add(tr->zero,bt-1,x);
    }
}
int get(Trie *tr,int i,ll p){
    if( !tr || i<0 ){return 0;}

    if(p&(1ll<<i)){
        if((tr->one)!=0 && (tr->one->cnt>0 ) ) {
            return (1ll<<i)+get(tr->one,i-1,p);
        }
        else{
            return get(tr->zero,i-1,p);
        }
    }
    else{
        if((tr->zero)!=0 && (tr->zero->cnt>0 ) ){
            return get(tr->zero,i-1,p);
        }
        else{
            return (1ll<<i)+get(tr->one,i-1,p);
        }
    }
}
void rem(Trie *tr,int bt,ll x){
    tr->cnt--;
    if(bt<0)return;
    if(x&(1ll<<bt)){
        rem(tr->one,bt-1,x);
    }
    else{
        rem(tr->zero,bt-1,x);
    }
}
int main(){
scll(n);
read_arr_ll(a,1,n);
Trie *root=new Trie();
for(int i=1;i<=n;i++){scll(tmp);add(root,32,tmp);}
for(int i=1;i<=n;i++){
    tmp=get(root,32,a[i]);
    printf("%d ",a[i]^tmp);
    rem(root,32,tmp);
}
}
/**
3
8 4 13
3 2 7

**/
