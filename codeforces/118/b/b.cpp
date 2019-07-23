#include <bits/stdc++.h>
using namespace std;
int n;
int m[20][20];
bool vis[20][20];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool in(int x,int y){
if(x<0 || x>=20 ){return 0;}
if(y<0 || y>=20 ){return 0;}
return 1;
}
void bfs(int x,int y) {
	queue<pair<int,int>>s;
	m[x][y]=n;
	vis[x][y]=1;
	s.push({x,y});
	while (!s.empty()) {
		int xs= s.front().first;
		int ys= s.front().second;
		s.pop();

		for (int i = 0;i<4; i++)
			if (!vis[xs+dx[i]][ys+dy[i]] && in(xs+dx[i],ys+dy[i])) {
				m[xs+dx[i]][ys+dy[i]] = m[xs][ys]-1;
				vis[xs+dx[i]][ys+dy[i]]=1;
				s.push({xs+dx[i],ys+dy[i]});
			}
	}
}
int main() {
scanf("%d",&n);
bfs(n,n);
for(int i=0;i<(2*n)+1;i++){
    for(int j=0;j<(2*n)+1;j++){
        if(j>=n && m[i][j]==0){cout<<0;break;}
        if(m[i][j]<0){cout<<"  ";continue;}
        cout<<m[i][j]<<" ";
    }
cout<<endl;
}
}
