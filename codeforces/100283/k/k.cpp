#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,a[109],ans[109],casen=1;

int main()
{
    freopen("cubes.in","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d",&n);
        for (int i=0;i<n;i++)
        {
            scanf("%d",a+i);
        }
        l=0,r=n-1;
        sort(a,a+n);
        bool b=0;
        for (int i=n-1;i>-1;i--)
        {
            if (!b)
            {
                ans[r--]=a[i];
                b=1;
            }
            else
            {
                ans[l++]=a[i];
                b=0;
            }
        }
        printf("Case %d:\n%d",casen++,ans[0]);
        for (int i=1;i<n;i++)
        {
            printf(" %d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
