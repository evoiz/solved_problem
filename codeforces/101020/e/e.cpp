#include<bits/stdc++.h >
using namespace std;
int xa,ya,xb,yb,n,t;
int m[24][24];
int dx[] = { 1, -1, 1, -1 };
int dy[] = { 1, 1, -1, -1 };
bool in(int x, int y){
	if (x<0||x>=n){ return 0; }
	if (y<0||y>=n){ return 0; }
	return 1;
}
void bfs(int x, int y) {
	queue<pair<int, int>>s;
	m[x][y] = 0;
	s.push({x,y});
	while(!s.empty()) {
		int xs = s.front().first;
		int ys = s.front().second;
		s.pop();
		for (int i = 0; i<4; i++){
		if (m[xs + dx[i]][ys + dy[i]]==-1 && in(xs + dx[i], ys + dy[i])){
			m[xs + dx[i]][ys + dy[i]] = m[xs][ys] + 1;
			s.push({ xs + dx[i], ys + dy[i] });
		 }
		}
	}
}
int main(){
	scanf("%d %d",&t,&n);
	while (t--){
        memset(m,-1,sizeof(m));
		scanf("%d %d %d %d",&xa,&ya,&xb,&yb);
		bfs(xa,ya);
		int ans=m[xb][yb];
		if (ans==-1){printf("can't reach!\n");}
		else{printf("%d\n",ans);}

	}
	return  0;
}
