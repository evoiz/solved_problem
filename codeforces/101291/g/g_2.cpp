#include <bits/stdc++.h>

using namespace std;

int n,m;
char ch[100][100];

int main()
{
    cin >> n >> m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> ch[i][j];
        }
    }
    for (int k=0;k<1000;k++)
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (ch[i][j]=='o'&&i!=n-1)
            {
                if (ch[i+1][j]=='.')
                {
                    ch[i+1][j]='o';
                    ch[i][j]='.';
                }
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << ch[i][j];
        }
        cout << endl;
    }
    return 0;
}
