#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
const int N=1e5+5;
pair<long long,long long>m[N];
map<long long,int>fir,sec;
long long n,t,ans;
int main(){
   scanf("%I64d",&t);
   while(t--){
    fir.clear();
    sec.clear();
    scanf("%I64d",&n);
     ans=0;
     for(int i=0;i<n;i++){
     scanf("%I64d%I64d",&m[i].F,&m[i].S);
     ans+=(fir[m[i].S])+(sec[m[i].F]);fir[m[i].F]++;sec[m[i].S]++;
     }
     printf("%I64d\n",ans);
   }
    return 0;
}