#include <bits/stdc++.h>
using namespace std;
int m[10][10];
int dx[]={0,0,1,-1,1,-1,1,-1};
int dy[]={1,-1,0,0,1,1,-1,-1};
string dir[]={"U","D","L","R","LU","RU","LD","RD"};
/**
RD D LD
R    L
RU U LU
**/
string a,b;
bool in(int x,int y){
if(x<0 || x>=8 ){return 0;}
if(y<0 || y>=8 ){return 0;}
return 1;
}
void bfs(int x,int y) {
	queue<pair<int,int>>s;
	m[x][y]=1;
	s.push({x,y});
	while (!s.empty()) {
		int xs= s.front().first;
		int ys= s.front().second;
		s.pop();

		for (int i = 0;i<8; i++)
			if (!m[xs+dx[i]][ys+dy[i]] && in(xs+dx[i],ys+dy[i])) {
				m[xs+dx[i]][ys+dy[i]] = m[xs][ys]+1;
				s.push({xs+dx[i],ys+dy[i]});
			}
	}
}
vector<string>ans;
void path(int x, int y){
if(x==a[0]-'a'&&y==7-a[1]+'1'){return ;}
int dis=m[x][y];
for(int i=0;i<8;i++){
   if(!in(x+dx[i],y+dy[i])){continue ;}
  if(m[x+dx[i]][y+dy[i]]==dis-1){ans.push_back(dir[i]);path(x+dx[i],y+dy[i]);return;}
 }
}
int main() {
cin>>a>>b;
bfs(a[0]-'a',8-(a[1]-'0'));
path(b[0]-'a',8-(b[1]-'0'));
/**for(int i=0;i<8;i++){
 for(int j=0;j<8;j++){cout<<m[i][j]<<" ";}
 cout<<endl;
 }**/
 cout<<ans.size()<<endl;
 for(auto x:ans){
    cout<<x<<endl;
 }
}
/**

**/
