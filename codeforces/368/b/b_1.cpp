#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+6;
int a[N],dp[N],n,q,tmp,ans;
set<int> st;
int main(){
scanf("%d%d",&n,&q);
for(int i=1;i<=n;i++){scanf("%d",a+i);}
dp[n]=1;
for(int i=n;i>=1;i--){dp[i]=dp[i+1]+(!(st.find(a[i])!=st.end()));st.insert(a[i]);}
while(q--){
    scanf("%d",&tmp);
    printf("%d\n",dp[tmp]);
  }
}
/**
const int N=1e5+10,oo=1e9+10;
int dp[N],tmp,n,m,st[4*N],lazy[4*N],a[N];
set < int > s ;
void proc(int p,int l,int r){
   st[p]+=lazy[p]*(r-l+1);
   if(l!=r){
   lazy[2*p]+=lazy[p];
   lazy[2*p+1]+=lazy[p];
   }
   lazy[p]=0;
}
int query(int p,int l,int r,int i,int j){
    proc(p,l,r);
    if (l>=i&&r<=j){return st[p];}
    if (l>j||r<i){return 0;}
    int mid=(l+r)/2;
    int x=query(2*p,l,mid,i,j);
    int y=query(2*p+1,mid+1,r,i,j);
    return x+y;
}
void update(int p,int l,int r ,int i,int j){
    proc(p,l,r);
    if (l>j||r<i){return;}
    if (l>=i&&r<=j){lazy[p]+=1;proc(p,l,r);return;}
    int mid=(l+r)/2;
    update(2*p,l,mid,i,j);
    update(2*p+1,mid+1,r,i,j);
    st[p]=st[2*p]+st[2*p+1];
}

int main(){
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++){
   scanf("%d",a+i);
   tmp=a[i];
   if(s.find(tmp)!=s.end()){continue;}
   s.insert(tmp);
   update(1,1,N-2,1,tmp-1);
}
while(m--){
 scanf("%d",&tmp);
 tmp=a[tmp];
 int ans=query(1,1,N-2,tmp,tmp);
 printf("%d\n",ans);
}
return 0;
}


**/
