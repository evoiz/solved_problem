#include <bits/stdc++.h>
using namespace std;
const int N=1e3,INf=1e9;
int n,m[N],t,ans;
int ch(int x){
int ans=0;
while(x){ans+=(x%2);x/=2;}
return ans;
}
int main(){
scanf("%d",&t);
while(t--){
ans=-INf;
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",m+i);}
for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
    ans=max(ans,ch(m[i]^m[j]));
   }
 }
 printf("%d\n",ans);
}
return 0;
}
/**

6
needle
turkey
bottle
12
**/