#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N = 1e5+6,oo=1e9;
int tmp,n,q,x,len,t,ans[N];
char s[N];
struct Trie{
    Trie *nxt[26];
    int cnt , isLeaf ;
    Trie(){
        cnt=isLeaf=0;
        for(int i=0;i<26;i++)
            nxt[i]=0;
        }
};

void add(Trie *tr,int i){
    tr->cnt++;
    ans[i]=max(ans[i],tr->cnt);
    if(i==len){tr->isLeaf++;return;}
    int to = s[i]-'a';
    if(tr->nxt[to]==0)tr->nxt[to]=new Trie();
    add(tr->nxt[to],i+1);
}
int main(){
scanf("%d",&t);
while(t--){
memset(ans,0,sizeof ans);
Trie *root=new Trie();
    scanf("%d%d",&n,&q);
    while( n-- ){
            scanf("%s",s);
            len = strlen(s);
             reverse(s,s+len);
            add(root,0);
    }
    while( q-- ){
      scanf("%d",&tmp);
      printf("%d\n",max(ans[tmp],1));
    }
}
    return 0;
}
/**
2
5 4
abccba
abddba
xa
abdcba
aneverknow
1
2
4
3
3 2
ab
cb
ab
1
2

i=0 sufix=l;
**/
