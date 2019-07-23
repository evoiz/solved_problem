#include <bits/stdc++.h>

using namespace std;
const int N=1e2+7;
long long  sum,n;
set<long long > v;
void init(long long x,int s,int f){
if(s+f==12){return ;}
long long tmp=(x*10);
if(s+1==f){v.insert(tmp+7);}
init(tmp+7,s+1,f);
if(s==f+1){v.insert(tmp+4);}
init(tmp+4,s,f+1);
}
int main(){
init(0,0,0);
scanf("%I64d",&n);
sum=*v.lower_bound(n);
printf("%I64d\n",sum);
   return 0;
}
