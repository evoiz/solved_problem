#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int n,m,a,b,x;

vector<int>v1,v2;

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        if (a==-1)
        {
            v1.pb(b);
        }
        else v2.pb(b);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cin >> m;
    for (int i=0;i<m;i++)
    {
        cin >> x;
       int ans=0;
       if (x>=0)
       {
           ans+=upper_bound(v1.begin(),v1.end(),-x)-v1.begin();
           ans+=upper_bound(v2.begin(),v2.end(),x)-v2.begin();
       }
       else
       {
           ans+=upper_bound(v1.begin(),v1.end(),abs(x))-v1.begin();
           ans+=upper_bound(v2.begin(),v2.end(),x)-v2.begin();
       }
       cout << ans << endl;
    }
    return 0;
}
/*
4
1 3
1 -3
-1 -3
-1 3
10000
3
*/
