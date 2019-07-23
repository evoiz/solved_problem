#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e5+5;
long long n,d,l,r,ans,tmp;
pair<long long,long long >p[N];
int main(){
scanf("%I64d %I64d",&n,&d);
for(int i=0;i<n;i++){scanf("%I64d%I64d",&p[i].f,&p[i].s);}
sort(p,p+n);
   while(r<n){
    if(abs(p[l].f-p[r].f)<d){tmp+=p[r].s;r++;}
    else{ans=max(ans,tmp);tmp-=p[l].s;l++;}
    ans=max(ans,tmp);
  }
  printf("%I64d\n",ans);
}
