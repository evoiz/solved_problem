#include<bits/stdc++.h>
using namespace std;
long long n,k,tmp,ans,last=1;
int main(){
scanf("%I64d%I64d",&n,&k);
while(k--){
    scanf("%I64d",&tmp);
    (last<=tmp?ans+=abs(tmp-last):ans+=n-abs(tmp-last));
   /// cout<<ans<<endl;
    last=tmp;
}
printf("%I64d\n",ans);
	return 0;
}
