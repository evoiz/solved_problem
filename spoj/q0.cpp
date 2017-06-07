#include <bits/stdc++.h>
using namespace std;
int  pr[1000004],a,b,k,ans,t;
int v[11][1000003];
void start(){
for(long long  i=2;i<=1000001;i++){
       if(!pr[i]){
       for (long long j=i;j<=1000001;j+=i){pr[j]++;}
     }
   }
      for(int i=0;i<=10;i++){
        for(int j=1;j<=1000000;j++) v[i][j] = v[i][j-1] + (pr[j]==i) ;
    }
}
int main(){
start();
scanf("%d",&t);
while(t--){
//cin>>a>>b>>k;
scanf("%d %d %d",&a,&b,&k);
printf("%d \n",v[k][b]-v[k][a-1]);
ans=0;
}
return 0;
}

