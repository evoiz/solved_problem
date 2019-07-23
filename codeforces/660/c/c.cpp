#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=3e5+6;
int pre[N],best,ii,jj,a[N],n,k,tmp;
bool ok(int x,int i){
return ((x-i+1)-(pre[x]-pre[i-1])<=k);
}
int bsr(int l,int h){
int mid,in=l;
while(l<=h){
   int mid=(l+h)/2;
   if(ok(mid,in)){l=mid+1;}
   else{h=mid-1;}
}
return h;
}
int main(){
scanf("%d%d",&n,&k);
for(int i=1;i<=n;i++){scanf("%d",a+i);}
ii=1;jj=n;
for(int i=1;i<=n;i++){pre[i]=a[i];pre[i]+=pre[i-1];}
for(int i=1;i<=n;i++){
      tmp=bsr(i,n);
      int len=tmp-i+1;
      if(best<len){ii=i;jj=tmp;best=len;}
}
cerr<<ii<< " "<<jj<<endl;
printf("%d\n",best);
for(int i=1;i<ii;i++){printf("%d ",a[i]);}
for(int i=ii;i<=jj;i++){if(!a[i] && k){printf("1 ");k--;continue;}printf("%d ",a[i]);}
for(int i=jj+1;i<=n;i++){printf("%d ",a[i]);}
return 0;
}
