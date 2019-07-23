#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int a,b,c,d,x,y;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        x=a+c;
        y=b+d;
        if (x==y)
        {
            if (b>c)cout << 2 << endl;
            else if (c>b)cout << 1 << endl;
            else cout << -1 << endl;
            continue;
        }
        if (x>y)cout << 1 << endl;
        else if (x<y)cout << 2 << endl;
    }
    return 0;
}