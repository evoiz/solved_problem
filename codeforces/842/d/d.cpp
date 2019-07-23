#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int tmp,n,q,x;
set<int>st;
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
int get(Trie *tr,int bt,int p){
if(!tr || bt<0 )return 0;
if(x&(1<<bt)){
        if (tr->one==0){return 0;}
        if (tr->one->cnt==(1<<bt)) {return (1<<bt)+get(tr->zero,bt-1,p);}
        else {return get(tr->one,bt-1,p);}
    }
    else{
        if (tr->zero==0) return 0;
        if (tr->zero->cnt == (1<<bt)) {return (1<<bt)+get(tr->one,bt-1,p);}
        else  {return get(tr->zero,bt-1,p);}
    }
}
int main(){
Trie *root=new Trie();
scanf("%d%d",&n,&q);
for(int i=0;i<n;i++){
  scanf("%d",&tmp);
  if(!(st.count(tmp))){st.insert(tmp);add(root,30,tmp);}
}
while(q--){
  scanf("%d",&tmp);
  x^=tmp;
  printf("%d\n",get(root,30,x));
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
