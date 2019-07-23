#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

/*
author: Basel
*/

using namespace std;

int k,ans,tmp;

string x,y;

int main()
{
    cin >> k >> x >> y;
    tmp=k;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]==y[i]&&k)
        {
            k--;ans++;
        }
    }
    for (int i=0;i<x.length();i++)
    {
        if (x[i]!=y[i]&&k)k--;
        else if (x[i]!=y[i]&&k==0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
