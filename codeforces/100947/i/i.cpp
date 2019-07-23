#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long t,n,a[N],ans,mem[N];
void ch(long long x){
for(int i=1;i*i<=x;i++){
   if(x%i==0){
 ///  cout<<x<<" "<<i<<" "<<mem[x/i]<<endl;
   ans+=mem[i];
   if((x/i)!=i){ans+=mem[x/i];}
   }
}

}
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",a+i);}
sort(a,a+n);
memset(mem,0,sizeof mem);
ans=0ll;
for(int i=0;i<n;i++){
  ch(a[i]);
  mem[a[i]]++;
}
printf("%I64d\n",ans);
}
return 0;
}
