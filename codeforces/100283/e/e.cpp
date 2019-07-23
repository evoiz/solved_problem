#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int egy,gha,t,x,y,casen=1;

int main()
{
    freopen("ghanophobia.in","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        egy=gha=0;
        scanf("%d:%d",&x,&y);
        egy+=x+1;
        gha+=y+6;
        if (egy==gha)
        {
            egy++;
            gha+=y;
        }
        if (egy==gha)
        {
            printf("Case %d: PENALTIES\n",casen++);
        }
        else if (egy>gha)
        {
            printf("Case %d: YES\n",casen++);
        }
        else printf("Case %d: NO\n",casen++);
    }
    return 0;
}
