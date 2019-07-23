#include <bits/stdc++.h>

using namespace std;

string s,pal="AHIMOTUVWXY";
int t;

/*void seive()
{
    for (int i=2; i<N; i++)b[i]=1;
    for (int i=2; i*i<N; i++)
    {
        if (b[i])
        {
            a[emp]=i;
            emp++;
            for (int j=i*i; j<N; j+=i)
            {
                b[j]=0;
            }
        }
    }
}*/
int main()
{
    cin >> t;
    while(t--){
            bool check=0;
    cin >> s;
    for (int i=0;i<s.length();i++)
    {
        if (pal.find(s[i])<=pal.length())
        {
            continue;
        }
        else
        {
            cout << "no" << endl;
            check=1;
            break;
        }
    }
    if (check)continue;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==s[s.length()-1-i])
            continue;
        else
        {
            cout << "no" << endl;
            check=1;break;
        }
    }
    if (!check)
    cout << "yes" << endl;
    }
    return 0;
}
