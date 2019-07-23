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

double n,ans;

int main()
{
    cin >> n;
    for (double i=2;i<=n;i++)
    {
        ans+=(i)*(i-1)/n;
    }
    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}

/*
1 1
10 4
10 5
5 2
*/
