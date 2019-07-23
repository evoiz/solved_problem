#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,x,y,z,a,b,casen=1;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&y,&z);
        a=(x*3600)+(y*60)+(z);
        scanf("%d%d%d",&x,&y,&z);
        b=(x*3600)+(y*60)+(z);
        if (a==b)
        {
            printf("Case %d: Yes\n",casen++);
        }
        else
        {
            printf("Case %d: No\n",casen++);
        }
    }
    return 0;
}