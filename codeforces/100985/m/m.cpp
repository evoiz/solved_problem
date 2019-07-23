#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double

using namespace std;

int n,m,emp,ans;

char ch[1009][1009];

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
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            for (int j=0;j<m;j++)
            {
                if (ch[i][j]=='.')emp++;
                else if (ch[i][j]=='L')
                {
                    ans=max(ans,emp);
                    emp=0;
                }
            }
        }
        else
        {
            for (int j=m-1;j>-1;j--)
            {
                if (ch[i][j]=='.')emp++;
                else if (ch[i][j]=='L')
                {
                    ans=max(ans,emp);
                    emp=0;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
