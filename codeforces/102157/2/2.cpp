#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define F first
#define Second

using namespace std;

const int N=1009;

int n,m;

double p,a[N][N];

vector<int>v;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

bool vis[N][N];

void dfs(int x,int y)
{
    vis[x][y]=1;
    for (int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if (nx==-1)nx=n-1;
        if (nx==n)nx=0;
        if (ny==-1)ny=m-1;
        if (ny==m)ny=0;
        if (a[nx][ny]>=p&&!vis[nx][ny])
        {
            dfs(nx,ny);
        }
    }
}

set<int>row,col;

int main()
{
    scanf("%d%d%lf",&n,&m,&p);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for (int j=0;j<m;j++)
    {
        if (a[0][j]>=p)dfs(0,j);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (vis[i][j])
            {
                row.insert(i);
                col.insert(j);
            }
        }
    }
    if (row.size()==n&&col.size()==m)printf("YES\n");
    else printf("NO\n");
    return 0;
}
/*
12 4
1 2
1 3
1 4
2 5
2 6
3 7
3 8
4 9
4 10
1 11
1 12
*/
