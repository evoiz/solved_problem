#include <bits/stdc++.h>
using namespace std;
int n,a,b,ans;
int m[26];
int main(){
scanf("%d",&n);
while(n--){
scanf("%d%d",&a,&b);
for(int i=a;i<b;i++){m[i]++;}
}
for(int i=0;i<25;i++){ans=max(ans,m[i]);}
cout<<ans<<endl;
return 0;
}
/**
for(int i=1;i<25;i++){mx=max(mx,m[i]);}
cout<<mx<<endl;
for(int i=1;i<25;i++){
    if(m[i]==mx){
    tmp=0;
    cout<<i<<"\t";
    for(int j=i;m[j]!=mx && j<25;i++,j++,tmp++);
    cout<<i<<"\t"<<tmp<<endl;
         ans=max(ans,tmp);
    }
}
cout<<ans<<endl;
**/
