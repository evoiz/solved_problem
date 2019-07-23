#include <bits/stdc++.h>
using namespace std;
long long t,ans,x,y,level,tmp;
long long sigma(long long x){
x+=x-1;
return x*(x+1);
}
int main(){
scanf("%I64d",&t);
while(t--){
    ans=0;
    scanf("%I64d%I64d",&x,&y);
    if((x)>0 && y>=-(x-1) && y<=x){
        ans=sigma(max(abs(x),abs(y)));
        ans-=abs(x-y);
    }
    level=max(abs(x),abs(y));
   //// cout<<"level = "<<level<<endl;
    if(y==level && x>=-level && x<level){
        tmp=abs(x-level);
        ////cout<<tmp<<endl;
        ans=sigma(level)+tmp;
    }
    if(x==-level && y>=-level && y<level){
        tmp=abs(y-level);
       /// cout<<tmp<<endl;
        ans=sigma(level)+(2*level)+tmp;
    }
    if(y==-level && x>-level && x<=level){
        tmp=abs(x-(-level));
        ans=sigma(level)+(4*level)+tmp;
    }
    printf("%I64d\n",ans);
}

return 0;
}
/**
100
1 0
1 1
0 1
-1 1
-1 0
-1 -1
0 -1
1 -1
2 -1
2 0
2 1
2 2
1 2
0 2
-1 2
-2 2
-2 1
-2 0
-2 -1
-2 -2
-1 -2
0 -2

**/
