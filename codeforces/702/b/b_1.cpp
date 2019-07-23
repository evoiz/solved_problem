#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e5+5;
long long n,mod[40],m[N],tmp,ans;
map<long long , int> freq;
void start(){
long long ans=1;
for(int i=1;i<=34;i++){mod[i]=ans;ans*=2;}
 return ;
}
int main(){
start();
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",&m[i]);}
for(int i=0;i<n;i++){
    for(int j=1;j<=34;j++){
        tmp=mod[j]-m[i];
        if(tmp>0){ans+=(freq[tmp]);}
     }
     freq[m[i]]++;
}

  printf("%I64d\n",ans);
}
/**

16 %15=15
16 %1=0
**/
