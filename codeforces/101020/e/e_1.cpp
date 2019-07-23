#include<bits/stdc++.h >
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
int n;
int m[24][24];
int dx[] = { 1, -1, 1, -1 };
int dy[] = { 1, 1, -1, -1 };
bool in(int x, int y){
	if (x<0 || x >= n){ return 0; }
	if (y<0 || y >= n){ return 0; }
	return 1;
}
int bfs(int x, int y , int xe , int ye) {
	queue<pair<int, int>>s;
	memset(m, -1, sizeof(m));
	m[x][y] = 0 ;
	s.push({ x, y });
    if (x == xe && y== ye) return m[xe][ye];
	while (!s.empty()) {
		int xs = s.front().first;
		int ys = s.front().second;
		s.pop();
        if (xs==xe && ys == ye) return m[xe][ye] ;
		for (int i = 0; i<4; i++){
		if (m[xs + dx[i]][ys + dy[i]]!=-1 || !in(xs + dx[i], ys + dy[i])) {continue;}
			m[xs + dx[i]][ys + dy[i]] = m[xs][ys] + 1;
			s.push({ xs + dx[i], ys + dy[i] });
		}

	}
	return -1;
}
int main()
{
	int  t;
	scanf("%d %d",&t,&n);
	while (t--)
	{

		int x1, y1, x2, y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		int ans=bfs(x1, y1 , x2 , y2);
		if (ans == -1) printf("can't reach!\n");
		else
			printf("%d\n",ans);

	}

	return  0;
}
