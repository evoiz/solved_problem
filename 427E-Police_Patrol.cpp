#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long m[1000010],n,k;
long long bs(int l , int r){
if(l>r){return 0;}
else {return ((m[r]-m[l])+bs(l+k,r-k));}
}
int main(){
    scanf("%I64d %I64d",&n,&k);
  for(int i=0;i<n;i++){scanf("%I64d",&m[i]);}
  long long ans=(bs(0,n-1))*2;
  printf("%I64d\n",ans);
}
