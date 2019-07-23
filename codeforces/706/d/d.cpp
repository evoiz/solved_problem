#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll n,x;
char ch;string in;
struct Trie{
    Trie *one,*zero;
    int cnt;
    Trie(){
        one=zero=NULL;
        cnt=0;
    }
};
void add(Trie *tr,int bt,ll p){
    tr->cnt++;
    if(bt<0)return;
    if(p&(1ll<<bt)){
        if( !tr->one )tr->one=new Trie();
        add(tr->one,bt-1,x);
    }
    else{
        if( !tr->zero )tr->zero=new Trie();
        add(tr->zero,bt-1,x);
    }
}
ll get(Trie *tr,int i,ll p){
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
void del(Trie *tr,int i,ll x){
    tr->cnt--;
    if (i<0)return;
    if (x&(1ll<<i)){
        if(tr->one->cnt==1){tr->one=NULL;}
        else{del(tr->one,i-1,x);}
    }
    else {
       if(tr->zero->cnt==1){tr->zero=NULL;}
       else{del(tr->zero,i-1,x);}
    }
}
int main(){
   bool ok=0,em=1;
    scanf("%lld",&n);
    Trie *root=new Trie();
    add(root,35,0);
    for (int i=0;i<n;i++){
       // scanf("%s",ch);
       cin>>ch;
        //in=(string)ch;
        scanf("%lld",&x);
        if(ch=='+'){add(root,35,x);continue;}
        if(ch=='-'){del(root,35,x);continue;}
           ll ans=x;
           ans^=get(root,35,x);
           printf("%lld\n",ans);
    }
    return 0;
}
