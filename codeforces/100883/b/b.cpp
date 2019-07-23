#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

int t,n,x,y;

int main()
{
    cin >> t;
    while(t--)
    {
        int mxx=-2000,mxy=-2000,mnx=1e7,mny=1e7;
        cin >> n;
        for (int i=0;i<n*4;i++)
        {
            cin >> x >> y;
            mxx=max(x,mxx);
            mxy=max(y,mxy);
            mnx=min(x,mnx);
            mny=min(y,mny);
        }
        cout << (mxx-mnx)*(mxy-mny) << endl;
    }
    return 0;
}
