#include <bits/stdc++.h>
using namespace std;
int m,n,z,ans,tmp;
int main(){
scanf("%d%d%d",&n,&m,&z);
tmp=max(n,m);
for(int i=1;i*tmp<=z;i++){
    ans+=((i*tmp)%(n+m-tmp)==0);
}
printf("%d\n",ans);
return 0;
}
/**
3 3=9


**/
