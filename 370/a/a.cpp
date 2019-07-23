#include<bits/stdc++.h>
using namespace std;
int r,b,k,xa,xb,ya,yb;
int m[10][10];
int dx[]={0,0,1,-1,1,-1,1,-1};
int dy[]={1,-1,0,0,1,1,-1,-1};
bool in(int x,int y){
if(x<1 || x>8 ){return 0;}
if(y<1 || y>8 ){return 0;}
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
int main(){
cin>>xa>>ya>>xb>>yb;
r+=(xa!=xb);
r+=(ya!=yb);
///////////
if((xa%2+ya%2)%2!=(xb%2+yb%2)%2){b=0;}
else{
    if(abs(xa-xb)==abs(ya-yb)){b=1;}
    else{b=2;}
}
bfs(xa,ya);
k=m[xb][yb]-1;
cout<<r<<" "<<b<<" "<<k<<endl;
}
/**

**/
