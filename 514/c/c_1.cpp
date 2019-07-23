#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N = 6e5+5;
int len,n,q;
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
    if( i == len ){ tr->isLeaf++; return; }
    int to = s[i]-'a';
    if( tr->nxt[to] == 0 )tr->nxt[to]=new Trie();
    add(tr->nxt[to],i+1);
}
bool get(Trie *tr,int i,bool us){
    if( i == len )return ((tr->isLeaf)>0 && !us);
    int to = s[i]-'a';
    bool ok=0;
    if(us){
    for(int j=0;j<26;j++){
         if(j!=to && tr->nxt[j]){
           ok=ok||get(tr->nxt[j],i+1,0);
         }
      }
   }
   if(tr->nxt[to]){ok=ok||get(tr->nxt[to],i+1,us);}
    return ok;
}
int main(){
    Trie *root=new Trie();
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++){scanf("%s",s);len = strlen(s);add(root,0);}
    while(q--){
        scanf("%s",s);
        len=strlen(s);
        bool ok=get(root,0,1);
        printf(ok?"YES\n":"NO\n");
    }
    return 0;
}

/**
2
5 1 5
11111191111191111911
11181111111111818111
11811171817171181111
11111116161111611181
11751717818314111118
5 1 5
11111191111191111911
11181111111111818111
11811171817171181111
11111116161111611181
11751717818314111118

1
3 1
a
b
c
1

**/
