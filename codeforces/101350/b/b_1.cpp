#include <bits/stdc++.h>

using namespace std;

int t,a,b;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if (a>=b)
            cout << "FunkyMonkeys" << endl;
        else if (b>a)
            cout << "WeWillEatYou" << endl;
    }
    return 0;
}
