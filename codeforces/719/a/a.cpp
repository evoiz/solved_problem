#include <bits/stdc++.h>

using namespace std;
int ans=0;
int main(){
int sz;
scanf("%d",&sz);

int m[sz];
for(int i=0;i<sz;i++){scanf("%d",&m[i]);}
if(sz ==1 && m[sz-1]!=15 && m[sz-1]!=0){printf("-1");return 0;}
else if(m[sz-1]==0){printf("UP");return 0;}
else if(m[sz-1]==15){printf("DOWN");return 0;}
else if((m[sz-1] - m[sz-2])==1){printf("UP");return 0;}
else if((m[sz-1] - m[sz-2])==-1){printf("DOWN");return 0;}
return 0;
}