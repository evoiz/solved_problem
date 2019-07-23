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
const int N=(1<<18)+100;
int mem[3][3][N];
char a[20],b[20],aa,bb;
int dp(int ok,int zero,int mask){
if(mask==0){return 1;}
int &ret=mem[ok][zero][mask];
if(ret!=-1){return ret;}
ret=0;
int ind=0;
loop(i,0,aa-1){ind+=(!(mask&(1<<i)));}
for(int i=0;i<aa;i++){
  if(mask&(1<<i)){
    if(!zero && a[i]=='0'){continue;}
    if(!ok && a[i]>b[ind]){continue;}
    int mask_=mask-(1<<i);
    int ok_=ok||(a[i]<b[ind]);
    int zero_=zero||(a[i]!=0);
    ret=ret||(dp(ok_,zero_,mask_));
  }
}
return ret;
}

void print(int ok,int zero,int mask){
if(mask==0){return ;}
int ret=mem[ok][zero][mask];
int ind=0;
loop(i,0,aa-1){ind+=(!(mask&(1<<i)));}
for(int i=0;i<aa;i++){
  if(mask&(1<<i)){
    if(!zero && a[i]=='0'){continue;}
    if(!ok && a[i]>b[ind]){continue;}
    int mask_=mask-(1<<i);
    int ok_=ok||(a[i]<b[ind]);
    int zero_=zero||(a[i]!=0);
    int tmp=(dp(ok_,zero_,mask_));
    if(ret==tmp){
      printf("%d",(int)a[i]-'0');
      print(ok_,zero_,mask_);
      return ;
    }
  }
}
return ;
}

int main(){
me(mem,-1);
scs(a);
scs(b);
aa=strlen(a);bb=strlen(b);
sort(allr(a,aa),greater<char>());
if(aa<bb){printf("%s\n",a);return 0;}
int ans=dp(0,0,(1<<aa)-1);
print(0,0,(1<<aa)-1);
}
/**
a
c
**/
