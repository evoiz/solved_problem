#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int mn=a, mx=a, mni=0, mxi(0);
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a > mx){mx = a;mxi = i;}
        if (a <= mn){mn = a;mni = i;}
    }
    cout << mxi + (n - 1 - mni) - (mni < mxi ? 1 : 0) << endl;
    return 0;
}
