#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
using namespace std;
const int N=1e6+10,oo=1e6;
int n,m,l,r;
string s;
struct node{
int best=0,L=0,R=0;
}st[4*N];
node mrg(node a,node b){
node ret;
ret.best=a.best+b.best+min(a.L,b.R);
ret.L=a.L+b.L-min(a.L,b.R);
ret.R=a.R+b.R-min(a.L,b.R);
return ret;
}
void build(int p,int l,int r){
if(l==r){
node ret;ret.L=(s[l]=='(');ret.R=(s[l]==')');
st[p]=ret;
return;
}
int mid = (l + r) / 2;
build(p*2,l,mid);
build(p*2+1,mid+1,r);
st[p]=mrg(st[2*p],st[2*p+1]);
}

node rsq(int p,int l,int r,int i,int j){

if(l >= i && r <= j){return st[p];}
if(r < i || l > j){node ret;ret.best=0;ret.L=ret.R=0; return ret;}
int mid = (l + r) / 2;
node x = rsq(p * 2, l, mid, i, j);
node y = rsq(p * 2 + 1, mid + 1, r, i, j);
return mrg(x,y);
}
int main(){
cin>>s>>m;
n=s.length();
s="0"+s;
build(1,1,n);
cerr<<"done\n"<<endl;
while(m--){
cin>>l>>r;
cout<<2*rsq(1,1,n,l,r).best<<endl;
}

}
/**
())(())(())(
7
1 1
2 3
1 2
1 12
8 12
5 11
2 10
**/
