#include <bits/stdc++.h>
using namespace std;
long long m[10002],a,b,st,en,fd;
int main() {
scanf("%I64d%I64d",&a,&b);
for(int i=1;i<=a;i++){scanf("%I64d",&m[i]);}
while(b--){
    scanf("%I64d %I64d %I64d",&st,&en,&fd);
    long long cont=0;
    for(int i=st;i<=en;i++){
        cont+=(m[fd]>m[i]);
    }

    ////cout<<cont<<endl;
    if(cont+st==fd){printf("Yes\n");continue;}
    else{printf("No\n");}
}
	return 0;
}
