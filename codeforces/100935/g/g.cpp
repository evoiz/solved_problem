#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
 
using namespace std;
 
int t,a[7][7],b[7][7],casen=1,index;
 
bool vis[20],check;
 
pair<int,int>p[10];
 
vector<int>v;
 
bool ok()
{
    int emp=0;
    for (int i=0; i<4; i++)
    {
        emp+=b[0][i];
    }
    for (int i=1; i<4; i++)
    {
        int x=0;
        for (int j=0; j<4; j++)
        {
            x+=b[i][j];
        }
        if (x!=emp)return 0;
    }
    for (int j=0; j<4; j++)
    {
        int x=0;
        for (int i=0; i<4; i++)
        {
            x+=b[i][j];
        }
        if (x!=emp)return 0;
    }
    return 1;
}
 
void print()
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d",b[i][j]);
            if (j<3)printf(" ");
        }
        printf("\n");
    }
}
 
void f(int pos)
{
    if (pos==9)
    {
        //print();
        //   char ch;cin >> ch;
        if (ok()&&!check)
        {
            printf("Case %d:\n",casen++);
            print();
            check=1;
        }
        return;
    }
    for (int i=0; i<v.sz(); i++)
    {
        if (!vis[v[i]])
        {
            vis[v[i]]=1;
            b[p[pos].F][p[pos].S]=v[i];
            f(pos+1);
            vis[v[i]]=0;
        }
    }
    return;
}
 
int main()
{
    for (int i=1; i<17; i++)
    {
        v.pb(i);
    }
    scanf("%d",&t);
    while(t--)
    {
        check=0;
        index=0;
        memset(b,-1,sizeof b);
        memset(vis,0,sizeof vis);
        for (int i=0; i<4; i++)
        {
            for (int j=0; j<4; j++)
            {
                scanf("%d",&a[i][j]);
                if (a[i][j]==-1)
                {
                    p[index]= {i,j};
                    index++;
                }
                else
                {
                    b[i][j]=a[i][j];
                    vis[a[i][j]]=1;
                }
            }
        }
        f(0);
    }
    return 0;
}