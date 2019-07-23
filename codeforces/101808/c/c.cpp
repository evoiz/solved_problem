#include<bits/stdc++.h>
using namespace std;

string s1, s2;

int t;

main()
{
    scanf("%d", &t);
    while(t--)
    {
        cin >> s1 >> s2;
        int n = s1.length();
        int cnt = 0;

        bool ok = 1;
        bool R = 0;
        for(int i=0, j = n-1; i<n/2; j--, i++ )
        {
            if(!R)
            {
                if(s1[i] != s2[i] || s1[j] != s2[j])
                {
                    if(s1[i] == s2[j] && s1[j] == s2[i] )
                    {
                        cnt ++;
                        R = 1;
                    }
                    else
                    {
                        ok = 0;
                        break;
                    }
                }
            }

            else
            {
                if(s1[j] != s2[i] || s1[i] != s2[j])
                {
                    if(s1[j] == s2[j] && s1[i] == s2[i] )
                    {
                        cnt ++;
                        R = 0;
                    }
                    else
                    {
                        ok = 0;
                        break;
                    }
                }
            }
        }
        if(s1[n/2] != s2[n/2])ok = 0;
        if(ok)
            cout << cnt << endl;
        else cout << -1 << endl;


    }

}
