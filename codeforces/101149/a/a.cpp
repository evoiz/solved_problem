#include <bits/stdc++.h>

using namespace std;

int n,m[200099];
int main()
{
    cin >> n;
    for (int i=0; i<n; i++){cin >> m[i];}
    sort(m,m+n);
    cout << m[n-1] << endl;
    return 0;
}
