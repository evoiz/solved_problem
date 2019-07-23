#include <bits/stdc++.h>
using namespace std;
const int N=1e5+6;
long long n,q,m[N],tmp;
int bsr(int l,int h){
while(l<=h){
   int mid=(l+h)/2;
   if(m[mid]<=tmp){l=mid+1;}
   else {h=mid-1;}
  }
  return l;
}
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",&m[i]);}
sort(m,m+n);
scanf("%I64d",&q);
while(q--){
   scanf("%I64d",&tmp);
   int ans=bsr(0,n-1);
   printf("%d\n",ans);
}
return 0;
}
/**
5
3 10 8 6 11
10
1
10
3
11
**/
