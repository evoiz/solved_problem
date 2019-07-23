#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n;

pair<string,pair<int,int> >p[109];

bool cmp(pair<string,pair<int,int> >a,pair<string,pair<int,int> >b)
{
    if (a.S.F!=b.S.F)
    {
        return a.S.F>b.S.F;
    }
    else
    {
        return a.S.S<b.S.S;
    }
}

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> p[i].F >> p[i].S.F >> p[i].S.S;
        }
        sort(p,p+n,cmp);
        cout << p[0].F << endl;
    }
    return 0;
}
