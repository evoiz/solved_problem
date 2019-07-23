#include <bits/stdc++.h>

using namespace std;

int a,b,c,t;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if (a>0&&b>0&&c>0&&(a+b+c)==180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
