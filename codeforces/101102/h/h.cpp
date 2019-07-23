#include <bits/stdc++.h>

using namespace std;

int t,n,m;
char k[100099];

int main()
{
    cin >> t;
    while(t--)
    {
        scanf("%d%d%s",&n,&m,&k);
        string x="0";
        string s=(string)k;
        for (int i=0;i<m;i++)
        {
            x+="0";
        }
        if (s.find(x)<=s.length())
            printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
