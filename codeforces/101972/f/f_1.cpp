#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,freq[30],two,one,mn;

int main()
{
    cin>>t;
    while(t--)
    {
        one=two=0;
        mn=1e9;
        memset(freq,0,sizeof freq);
        for (int i=0;i<26;i++)
        {
            cin >> freq[i];
            if (freq[i]>1)
            {
                two++;
                mn=min(mn,freq[i]);
            }
            else if (freq[i]==1)
            {
                one++;
            }
        }
        if (one==0&&two>0)
        cout << two*2 << " " << mn/2 << endl;
        else if (two>0&&one>0)
        {
            cout << two*2+1 << " " << min(mn/2,one) << endl;
        }
        else if (one>0&&two==0)
        {
            cout << 1 << ' ' << one << endl;
        }
        else cout << "0 0" << endl;
    }
    return 0;
}
