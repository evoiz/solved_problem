#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,a[15][15][15],F,H,X,Y,mem[15][15][15];

int dp(int f,int x,int y)
{
    if (f==1&&x==10&&y==10)
    {
        return a[1][10][10];
    }
    if (mem[f][x][y]!=-1)return mem[f][x][y];
    int ans=0;
    if (x+1<11)ans=max(ans,a[f][x][y]+dp(f,x+1,y));
    if (y+1<11)ans=max(ans,a[f][x][y]+dp(f,x,y+1));
    if (f>1)ans=max(ans,a[f][x][y]+dp(f-1,x,y));
    return mem[f][x][y]=ans;
}

void init()
{
    memset(a,0,sizeof a);
    memset(mem,-1,sizeof mem);
}

int main()
{
    freopen("commandos.in","r",stdin);
    cin >> t;
    while(t--)
    {
        init();
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> F >> X >> Y >> H;
            a[F][X][Y]=H;
        }
        cout << dp(10,1,1) << endl;
    }
    return 0;
}
