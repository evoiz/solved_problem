#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e6+32;
long long freq[N],tmp,n;
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%i64d",&tmp);freq[tmp]++;}
long long ans=0;
for(long long i=0;i<N;i++){
freq[i+1]+=freq[i]/2;
      ans += freq[i]%2 ;
}
printf("%I64d\n",ans);
}