#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e4+10;
int mask,len,k;
char s[N],tmp[N];
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
bool get(int pos){
return ((mask&(1<<pos))==0);
}
int dfs(Trie *tr,int kk){
if(kk>k){return 0;}
int ret=1;
for(int i=0;i<26;i++){
  if(tr->nxt[i]!=0){
    ret+=dfs(tr->nxt[i],kk+get(i));
  }
}
return ret;
}
int main(){
scs(s);len=strlen(s);
scs(tmp);
sc(k);
for(int i=0;i<26;i++){
 if(tmp[i]=='1'){mask|=1<<i;}
}
Trie *root=new Trie();
loop(i,0,len-1){
  add(root,i);
}
int ans=dfs(root,0);
ans--;
printf("%d\n",ans);
}

