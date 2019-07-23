#include <bits/stdc++.h>
using namespace std;
int mem[105][105],t,n,m,xx,yy,INf=1e9,a,b;
char s[105][105];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool in(int x,int y){
if(x<0 || x>=n ){return 0;}
if(y<0 || y>=m ){return 0;}
if(s[x][y]=='.' || s[x][y]=='X'){return 1;}
return 0;
}
queue< pair<int,int> >q;
int bfs(int x,int y) {
   memset(mem,0,sizeof mem);
	mem[x][y]=1;
	q.push({x,y});
	while (!q.empty()) {
		int xs= q.front().first;
		int ys= q.front().second;
		q.pop();
		for (int i = 0;i<4; i++)
			if (!mem[xs+dx[i]][ys+dy[i]]&& in(xs+dx[i],ys+dy[i])) {
				mem[xs+dx[i]][ys+dy[i]]= mem[xs][ys]+1;
				q.push({xs+dx[i],ys+dy[i]});
			}
	}
	if(mem[xx][yy]){return mem[xx][yy];}
	return INf;
}
void fin(){
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if((s[i][j])=='X'){xx=i;yy=j;break;}
   }
 }
}
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&m);
for(int i=0;i<n;i++){
 scanf("%s",s[i]);
}
a=INf,b=INf;
fin();
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if((s[i][j])=='S'){a=min(a,bfs(i,j));}
    if((s[i][j])=='*'){b=min(b,bfs(i,j));}
   }
 }
 ///cout<<a<<" "<<b<<endl;
bool ok=(a<b);
printf(ok?"yes\n":"no\n");
}
return 0;
}
