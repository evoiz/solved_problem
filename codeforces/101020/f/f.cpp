#include <bits/stdc++.h>
using namespace std;
int t,n,m[30],sum[30],tmp,ans;
int main(){
scanf("%d",&t);
for(int c=1;c<=t;c++){
scanf("%d",&n);
tmp=0;
for(int i=0;i<n;i++){scanf("%d",&m[i]);tmp+=m[i];}
tmp=0;
ans=0;
sort(m,m+n);
int i=0;
for(i=0;i<n;i++){
        if(tmp+m[i]<=300){tmp+=m[i];ans+=tmp;}
        else{break;}
       ////cout<<m[i]<<" "<<tmp<<endl;
}
printf("Case %d: %d %d\n",c,i,ans);
}
return 0;
}

