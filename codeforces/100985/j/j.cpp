#include<bits/stdc++.h>
#define f first
using namespace std;
struct s{
int x,y,r;
}m[1005];
int n;
bool ch(int i,int j){
long long  t1=(long long)(m[i].x-m[j].x)*(m[i].x-m[j].x)+(m[i].y-m[j].y)*(m[i].y-m[j].y);
long long t2=(long long) (m[i].r+m[j].r)*(m[i].r+m[j].r);
return t1==t2;
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d%d%d",&m[i].x,&m[i].y,&m[i].r);}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(ch(i,j)){printf("%d %d\n",i+1,j+1);}
    }
}
return 0;
}
