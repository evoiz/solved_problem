#include <bits/stdc++.h>

using namespace std;

int n,m,ans,mn;
bool vis[60][60];
char ch[60][60];
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};

vector < pair<int,int> >v;

bool inside(int i,int j)
{
    return (i>-1&&j>-1&&i<n&&j<m);
}

void DFS(int x,int y)
{
    vis[x][y]=1;
    for (int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if (inside(nx,ny)&&!vis[nx][ny]&&(ch[nx][ny]=='C'||ch[nx][ny]=='L'))
        {
            vis[nx][ny]=1;
            v.push_back({nx,ny});
            DFS(nx,ny);
        }
    }
    if (ch[x][y]=='L'||ch[x][y]=='C')return;
    vis[x][y]=0;
    v.pop_back();
    return;
}

int main()
{
    cin >> n >> m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cin >> ch[i][j];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            //if (i==2&&j==0)cout << "bottom left L" << endl;
            if (ch[i][j]=='L'&&!vis[i][j])
            {
                DFS(i,j);
                ans++;
                vector< pair<int,int> >::iterator it;
                for (it=v.begin();it!=v.end();it++)
                {
                    ch[it->first][it->second]='L';
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}