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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e4+6,oo=1e9;
char s[N];
int n,len,co,t;
char cc;
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
    if(i==len){tr->isLeaf++;return;}
    int to = s[i]-'a';
    if(tr->nxt[to]==0)tr->nxt[to]=new Trie();
    add(tr->nxt[to],i+1);
}
pair<int,int> get(Trie *tr,int dep){
pair<int,int> ret={dep,tr->cnt},tmp;
for(int i=0;i<26;i++){
   if(tr->nxt[i] && tr->nxt[i]->cnt>2){
     tmp=get(tr->nxt[i],dep+1);
     if(tmp.F>ret.F){
        ret=tmp;
     }
   }
}
return ret;
}
int main(){
sc(t);
loop(1,t,1){
sc(n);
Trie *root=new Trie();
loop(0,n-1,1){
    scs(s);
    len=strlen(s);
    reverse(s,s+len);
    loop(0,len-1,1){
       if(s[i]>='A'  && s[i]<='Z'){s[i]+=32;}
    }
    add(root,0);
}
pair<int,int> res=get(root,0);
printf("Case %d:\n%d %d\n",i,res.F,res.S);
}
}
