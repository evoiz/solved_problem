#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1005;

int n,a[N],b[N],ans=-1;

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++){cin >> a[i] >> b[i];}
    for (int i=0;i<=n;i++){
        int cnt=0;
        for (int j=1;j<=n;j++)
            cnt+=(a[j]<=i && i<=b[j]);
        if (i==cnt)ans=i;
    }
    cout<<ans<<endl;
    return 0;
}
/*
4
2 5
2 4
1 7
9 10
*/
