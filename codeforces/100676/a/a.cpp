#include <bits/stdc++.h>

using namespace std;

int x,y,t;
string op;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> x >> op >> y;
        if (op=="!=")
        {
            if (x!=y)
            {
                cout << "true" << endl;
            }
                else
                    cout << "false" << endl;
        }
        if (op=="==")
        {
            if (x==y)
            {
                cout << "true" << endl;
            }
                else
                    cout << "false" << endl;
        }
        if (op=="<=")
        {
            if (x<=y)
            {
                cout << "true" << endl;
            }
                else
                    cout << "false" << endl;
        }
        if (op==">=")
        {
            if (x>=y)
            {
                cout << "true" << endl;
            }
                else
                    cout << "false" << endl;
        }
        if (op==">")
        {
            if (x>y)
            {
                cout << "true" << endl;
            }
                else
                    cout << "false" << endl;
        }
        if (op=="<")
        {
            if (x<y)
            {
                cout << "true" << endl;
            }
                else
                    cout << "false" << endl;
        }
    }
    return 0;
}
