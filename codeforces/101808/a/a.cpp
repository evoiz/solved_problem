#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int R,r,t;

double pie=acos(-1);

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> R >> r;
        double a=pie*R*R;
        double b=pie*r*r;b+=b;
        if (a>b)cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
