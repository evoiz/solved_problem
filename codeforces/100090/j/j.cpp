#include <bits/stdc++.h>
#define F first
#define S second
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
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=200000+10;
struct node{
  ll num;
  node *nxt;	
  node *pr;	
  node(){
	  num=0;
	  pr=NULL;
	  nxt=NULL;
  }
};
void add_r(node *cur,int x){
    node *nw=new node();
	if(cur->nxt==0){
		nw->pr=cur;
		cur->nxt=nw;
		nw->num=x;
		return ;
	}
    node *tmp=cur->nxt;
    cur->nxt=nw;
    tmp->pr=nw;
    nw->num=x;
    nw->pr=cur;
    nw->nxt=tmp;	
}
void add_l(node *cur,int x){
    node *nw=new node();
    node *tmp=cur->pr;
    cur->pr=nw;
    tmp->nxt=nw;
    nw->num=x;
    nw->pr=tmp;	
    nw->nxt=cur;	
}
ll n,m,a[N],idx,q;
char s[50];
string scan(){scs(s);return (string) s;}
int main(){
node *head=new node();
node *pos=new node();
pos=head;
scll(n);scll(m);
idx=m;
read_arr_ll(a,1,n);
loop(i,1,n){
	//cerr<<"- "<<i<<endl;
   add_r(pos,a[i]);
   pos=pos->nxt;	
}
pos=head->nxt;
loop(i,1,m-1){
	pos=pos->nxt;
}
scll(q);
while(q--){
	string in=scan();
	if(in=="moveLeft"){
		if(idx==1){continue ;}
		else{
		  pos=pos->pr;
		  idx--;
		}
		//cerr<<"idx:="<<idx<<endl;
	}
	if(in=="moveRight"){
		if(pos->nxt!=0){
			idx++;
			pos=pos->nxt;
		}
		//cerr<<"idx:="<<idx<<endl;
	}
	if(in=="print"){
	  printf("%lld\n",pos->num);
	}
	if(in=="insertRight"){
		ll x;
		scll(x);
		add_r(pos,x);
	}
	if(in=="insertLeft"){
	   ll x;
	   scll(x);
	   add_l(pos,x);
	   idx++;	
	}
}	


}
/**
3 2
2 3 5
15
moveLeft
insertLeft 1
moveLeft
print
moveLeft
moveRight
print
moveRight
insertRight 4
moveRight
moveRight
print
moveRight
moveLeft
print
**/