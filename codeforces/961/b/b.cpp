#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=(1e5)+10,oo=1e9;
int a[N],b[N],k,n,ans,slp[N],sum;
int main(){
scanf("%d%d",&n,&k);
for(int i=1;i<=n;i++){scanf("%d",a+i);}
for(int i=1;i<=n;i++){scanf("%d",b+i);}
for(int i=1;i<=n;i++){
if(!b[i]){slp[i]+=a[i];}
else{sum+=a[i];}
slp[i]+=slp[i-1];
}
for(int i=1;i+k-1<=n;i++){
int tmp=sum+slp[i+k-1]-slp[i-1];
ans=max(ans,tmp);
}
printf("%d\n",ans);
return 0;
}
