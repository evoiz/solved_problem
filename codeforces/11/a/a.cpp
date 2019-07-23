#include <bits/stdc++.h>
using namespace std;
const int N=1e6+3;
long long ans,n,t,m[N],tmp;
int main() {
scanf("%I64d%I64d",&n,&t);
for(int i=0;i<n;i++){scanf("%I64d",&m[i]);}
for(int i=1;i<n;i++){
if(m[i]<=m[i-1]){
    if(m[i]==m[i-1]){m[i]+=t;ans++;}
    else{tmp=(abs(m[i]-m[i-1])/t)+1;m[i]+=tmp*t;ans+=tmp;}
    }
}
   printf("%I64d\n",ans);
}
/**

**/
