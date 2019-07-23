#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
int sum[N],a[N],pr[]={2,3,5,7,11,13,17,19,23,29,31},t,x,y;
bool ch(int x){
int ans=0;
while(x){ans+=(x%2);x/=2;}
for(int i=0;i<11;i++){
if(ans==pr[i]){return 1;}
}
return 0;
}
void start(){
int tmp=0;
for(int i=0;i<=N;i++){
a[i]=ch(i);
tmp+=a[i];
sum[i]=tmp;
}
}
int main(){
start();
scanf("%d",&t);
while(t--){
    scanf("%d%d",&y,&x);
    printf("%d\n",sum[x]-sum[y-1]);
    }
    return 0;
}
