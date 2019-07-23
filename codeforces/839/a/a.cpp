#include <bits/stdc++.h>
using namespace std;
const int N=1e2+7;
int n,k,m[N],tmp,sum;
int main(){
scanf("%d %d",&n,&k);
for(int i=1;i<=n;i++){scanf("%d",&tmp);sum+=tmp;m[i]=min(8,sum);sum-=m[i];}
sum=0;
for(int i=1;i<=n;i++){
sum+=m[i];
if(sum>=k){cout<<i<<endl;return 0;}
///cout<<m[i]<<" "<<sum<<endl;
}
cout<<-1<<endl;
return 0;
}
