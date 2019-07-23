#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e5+4;
long long n,k,a[N],b[N],ans,tmp;
bool ch(long long x){
long long ans=k;
for(int i=0;i<n;i++){
  long long tmp=(long long )(x*a[i])-b[i];
  tmp=(tmp>0?tmp:0);
  ans-=tmp;
  if(ans<0){return 0;}
 }
 return 1;
}
long long bsr(long long l, long long h){
   while(l<=h){
    long long mid=(l+h)/2;
    if(ch(mid)){l=mid+1;}
    else{h=mid-1;}
   }
   return h;
}
int main(){
scanf("%I64d%I64d",&n,&k);
for(int i=0;i<n;i++){scanf("%I64d",&a[i]);}
for(int i=0;i<n;i++){scanf("%I64d",&b[i]);}
if(!ch(1)){printf("0\n");return 0;}
ans=bsr(1,1e10);
printf("%I64d\n",ans);
}
/**

16 %15=15
16 %1=0
**/
