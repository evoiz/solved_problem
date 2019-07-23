#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=2e5+5;

ll n,x,f,ans,a[N];

int main()
{
    scanf("%lld",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%lld",a+i);
    }
    scanf("%lld%lld",&x,&f);
    for (int i=0; i<n; i++)
    {
        if (a[i]>x)
        {
            if (a[i]>f+x)
            {
                ans+=f*((a[i]/(f+x)));
                if (a[i]%(f+x)>x)ans+=f;
            }

            else ans+=f;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
