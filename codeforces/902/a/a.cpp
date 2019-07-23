#include <bits/stdc++.h>

using namespace std;
const int N=200;
int m[N],n,k,l,r,tmp;
int main(){
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){
       scanf("%d%d",&l,&r);
      m[l]++;
      m[r]--;
}
for(int i=0;i<k;i++){
    tmp+=m[i];
    m[i]=tmp;
    if(m[i]==0){printf("NO\n");return 0;}
}
printf("YES\n");
return 0;
}
/**
**/
