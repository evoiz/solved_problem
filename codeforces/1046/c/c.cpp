#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=2e5+5;

int n,d,s[N],p[N],l,r,cnt;

int main()
{
    cin >> n >> d;
    l=2,r=n;
    for (int i=1;i<=n;i++)
    {
        cin >> s[i];
    }
    for (int i=1;i<=n;i++)
    {
        cin >> p[i];
    }
    s[d]+=p[1];
    for (int i=1;i<d;i++)
    {
        if (s[i]>s[d]||s[i]+p[r]>s[d])
        {
            cnt++;
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << cnt+1 << endl;
    return 0;
}
/**
3 2
30 0 0
30 5 0
**/
