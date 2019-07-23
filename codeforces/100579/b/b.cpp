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
const int N=1e6+10;
int len,n;
char in[N];
string s;
string read(){scs(in);return (string) in;}
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
int dfs(Trie *tr,int i){
if(i==len){return 0;}
int to=s[i]-'a';
if(tr->nxt[to]!=0){
if(tr->nxt[to]->cnt>0)
return 1+dfs(tr->nxt[to],i+1);
}
return 0;
}
void del(Trie *tr,int i){
    tr->cnt--;
    if(i==len){tr->isLeaf--;return;}
    int to = s[i]-'a';
    if(tr->nxt[to]!=0 && tr->nxt[to]->cnt>=1){
		del(tr->nxt[to],i+1);
		if(tr->nxt[to]->cnt==0){
		  delete(tr->nxt[to]);
		  tr->nxt[to]=nullptr;	
		}
	}
}
void deleteAll(Trie *tr){
    for(int i=0;i<26;i++){
		if(tr->nxt[i]!=0){
		   deleteAll(tr->nxt[i]);
		   delete (tr->nxt[i]);
		   tr->nxt[i]=nullptr;
	    } 
	}
}
int main(){
int t;
sc(t);
 Trie *root=new Trie();
loop(tt,1,t){
 deleteAll(root);
 sc(n);
 ll ans=0ll;
 loop(i,1,n){
  s=read();
  len=s.length();
  //cerr<<1+dfs(root,0)<<endl;
  ans+=1ll*(min(1+dfs(root,0),len));
  add(root,0);
 }
 printf("Case #%lld: %lld\n",tt,ans);
}

}

/**
5
5
hi
hello
lol
hills
hill
5
a
aa
aaa
aaaa
aaaaa
5
aaaaa
aaaa
aaa
aa
a
6
to
be
or
not
two
bee
3
having
fun
yet
**/
