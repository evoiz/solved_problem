#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,m,x,stu;


map<int,int>boys,candies;

int main()
{
    cin >> t;
    while(t--)
    {
        boys.clear();
        candies.clear();
        stu=0;
        cin >> n >> m;
        for (int i=0; i<n; i++)
        {
            cin >> x;
            boys[x]++;
        }
        for (int i=0; i<m; i++)
        {
            cin >> x;
            candies[x]++;
        }
        map<int,int>::iterator it1=boys.begin(),it2=candies.begin();
        for (it1;it1!=boys.end();it1++)
        {
            bool check=0;
            while (it2->S < it1->S&&it2!=candies.end())
            {
                it2++;
            }
            if (it2->S>=it1->S)
            {
                check=1;
                it2++;
            }
            if (!check)break;
                stu+=it1->S;
        }
        if (stu==n)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}