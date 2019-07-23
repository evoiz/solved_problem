#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e3,oo=1e9;
int n,m,k,xx,yy,a,b,
dx[]={1,-1,0,0},
dy[]={0,0,1,-1},vis[N][N];
char in[N][N];
bool ok(int x,int y){
 if(x<0 || x>=n){return 0;}
 if(y<0 || y>=m){return 0;}
 if(in[x][y]=='x'){return 0;}
 return 1;
}
queue<pair<int ,int > > q;
int bfs(){
memset(vis,0,sizeof vis);
 q.push({0,0});
  vis[0][0]=1;
  while(q.size()){
     int x=q.front().F;
     int y=q.front().S;
     q.pop();
     for(int i=0;i<4;i++){
        if(!vis[x+dx[i]][y+dy[i]] && ok(x+dx[i],y+dy[i])){
          vis[x+dx[i]][y+dy[i]]=vis[x][y]+1;
          q.push({x+dx[i],y+dy[i]});
        }
     }

  }
  if(vis[n-1][m-1]){return vis[n-1][m-1];}
  return oo;
}
void printf(){
  for(int i=0;i<n;i++){
     for(int j=0;j<m;j++)cout<<vis[i][j]<<" ";cout<<endl;
  }
}
int main(){
  scanf("%d%d%d",&n,&m,&k);
  for(int i=0;i<n;i++){
   scanf("%s",in[i]);
  }
  a=bfs();
  while(k--){
    scanf("%d%d",&xx,&yy);
    in[xx][yy]='.';
  }
  b=5+bfs();
  printf(b<a?"YES\n":"NO\n");
}
