#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=777777777+10;
set<long long > st;
long long l,r,ans,low,high,tmp;
bool ok;
void btc(long long x){
if(x>N){return ;}
long long tmp=x*10;
st.insert(tmp+7);
btc(tmp+7);
st.insert(tmp+4);
btc(tmp+4);
return;
}
int main(){
btc(0);
scanf("%I64d%I64d",&l,&r);
low=l-1;high=l;
while((*st.upper_bound(low))<=r){
 high=*st.upper_bound(low);
 tmp=high-low;
 low=high;
 ans+=(long long)(tmp * high);
 ok=1;
}
if(high<=r){tmp=(*st.upper_bound(high));ans+=(long long)((r-high+(!ok))* tmp);}
printf("%I64d\n",ans);
}
