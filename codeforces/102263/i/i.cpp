#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

/*
author: Basel
*/

using namespace std;

const int N=3e5+5;

ll n,a[N],l,r,cntl,cntr,suml,sumr,ans;

vector<ll>v;

int main()
{
    cin >> n;
    r=n-1;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    suml=a[0],sumr=a[n-1];
    ans=a[n-1]-a[0];
    cntl++,cntr++;
    l++,r--;
    v.pb(ans);
    for (int k=3;k<=n;k++)
    {
        if ((abs((cntl*a[l])-suml))+(abs(sumr-(cntr*a[l])))>(abs((cntr*a[r])-sumr))+(abs(suml-(cntl*a[r]))))
        {
            ans+=(abs((cntl*a[l])-suml))+(abs(sumr-(cntr*a[l])));
            suml+=a[l];
            cntl++;
            l++;
        }
        else
        {
            ans+=(abs((cntr*a[r])-sumr))+(abs(suml-(cntl*a[r])));
            sumr+=a[r];
            cntr++;
            r--;
        }
        v.pb(ans);
    }
    cout << v[0];
    for (int i=1;i<v.sz();i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
    return 0;
}

/*
1 1
10 4
10 5
5 2
*/
