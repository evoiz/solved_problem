#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+6;
vector<string> s;
vector<vector<int> > vis;
int n,m,k,x,y,xf,yf;
char ch[N];
string tmp;
string read(){scanf("%s",ch);return (string)ch;}
queue<pair<int , int > >q;
int dx[]={1,-1,0,0},
    dy[]={0,0,-1,1};
bool in(int x,int y){
if(x<0 || x>=n){return 0;}
if(y<0 || y>=m){return 0;}
return 1;
}
void print(){
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     cerr<<vis[i][j]<<" ";
    }
    cerr<<endl;
 }
}
void man(){
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(s[i][j]=='S'){x=i,y=j;continue;}
    if(s[i][j]=='F'){xf=i,yf=j;continue;}
    if(s[i][j]=='M'){q.push({i,j});vis[i][j]=1;}
    }
 }
 int op=0;
 while(q.size()){
   int xx=q.front().F;
   int yy=q.front().S;
   q.pop();
      for(int i=0;i<4;i++){
         if(in(xx+dx[i],yy+dy[i])&& vis[xx+dx[i]][yy+dy[i]]==0 && vis[xx][yy]<=k){
            vis[xx+dx[i]][yy+dy[i]]=vis[xx][yy]+1;
            q.push({xx+dx[i],yy+dy[i]});
         }
      }
   }
 cerr<<"done3"<<endl;
print();
}
void bfs(){
q.push({x,y});
 while(q.size()){
   int xx=q.front().F;
   int yy=q.front().S;
   q.pop();
      for(int i=0;i<4;i++){
         if(in(xx+dx[i],yy+dy[i])&& vis[xx+dx[i]][yy+dy[i]]==0){
            vis[xx+dx[i]][yy+dy[i]]=vis[xx][yy]+1;
            q.push({xx+dx[i],yy+dy[i]});
         }
      }
   }
}
int main(){
scanf("%d%d%d",&n,&m,&k);
cerr<<n<<m<<k<<endl;
s.resize(n+4);
vis.resize(n+4);
cerr<<"done1"<<endl;
for(int i=0;i<n;i++){tmp=read();s[i]=tmp;for(int j=0;j<m;j++){vis[i].push_back(0);}}
cerr<<"done2"<<endl;
man();
if(vis[x][y] || vis[xf][yf]){printf("-1\n");return 0;}
bfs();
if(vis[xf][yf]==0){printf("-1\n");return 0;}
printf("%d",vis[xf][yf]);
return 0;
}
/**
5 7 1
S.M...M
.......
.......
M...M..
......F
**/
