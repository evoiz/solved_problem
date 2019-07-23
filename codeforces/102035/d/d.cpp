#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int n,a,b,s;

int main()
{
    cin >> n >> a >> b >> s;
    if ((n-1)*a+b>s||(n-1)*b+a<s)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}