#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=225;
int mem[N],a[N],t,n,k,ans,tmp;
bool in(int x){
return x<=n&&x>0;
}
queue<int> q;
int bfs(){
memset(mem,-1,sizeof mem);
scanf("%d%d",&n,&k);
ans=-1;
for(int i=0;i<k;i++){scanf("%d",&tmp);q.push(tmp);mem[tmp]=1;}
while(!q.empty()){
int X=q.front();
q.pop();
if(in(X+1) && mem[X+1]==-1){q.push(X+1);mem[X+1]=mem[X]+1;}
if(in(X-1) && mem[X-1]==-1){q.push(X-1);mem[X-1]=mem[X]+1;}
}
for(int i=1;i<=n;i++){ans=max(ans,mem[i]);}
return ans;
}
int main() {
scanf("%d",&t);
while(t--){
printf("%d\n",bfs());
}

}
/**
3
5 1
3
3 3
1 2 3
4 1
1
**/
