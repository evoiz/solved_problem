#include <bits/stdc++.h>

using namespace std;

int n,m,mem[509][509];
char ch[509][509];
bool vis[509][509];

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

bool inside(int i,int j)
{
    return (i>0&&j>0&&i<=n&&j<=m);
}

void F(int sx,int sy)
{
    mem[sx][sy]=0;
    queue< pair<int,int> >q;
    q.push({sx,sy});
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++)
        {
            int nx=x+((ch[x][y]-'0')*dx[i]);
            int ny=y+((ch[x][y]-'0')*dy[i]);
            if (nx==1&&ny==1)continue;
            if (inside(nx,ny)&&mem[nx][ny]>1+mem[x][y])
            {
                mem[nx][ny]=1+mem[x][y];
                q.push({nx,ny});
            }
        }
    }
}

int main()
{
    for (int i=0;i<509;i++)
    for (int j=0;j<509;j++)mem[i][j]=9999999;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
            cin >> ch[i][j];
    }
    F(1,1);
    if (mem[n][m]!=9999999)
    cout << mem[n][m] << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}
