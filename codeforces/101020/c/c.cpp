#include <bits/stdc++.h>
using namespace std;
long long t,n,a,b,c,ans,m[105];
int main(){
scanf("%I64d",&t);
while(t--){
ans=0;
scanf("%I64d",&n);
memset(m,0,sizeof m);
while(n--){
scanf("%I64d %I64d %I64d",&a,&b,&c);
for(int i=a;i<b;i++){m[i]=max(m[i],c);}
}
for(int i=0;i<=100;i++){ans+=m[i];}
cout<<ans<<endl;
}
return 0;
}

