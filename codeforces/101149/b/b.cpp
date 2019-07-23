#include <bits/stdc++.h>
using namespace std;
pair<long , long>s[1000000];

bool cmp( pair<long , long> a,  pair<long long, long long > b) {
    return (a.first - a.second) < (b.first - b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,tmp1,tmp2,tmp;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        s[i].first=tmp1;
        s[i].second=tmp2;
    }
    sort(s, s+n, cmp);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long tmp = s[i].first - s[i].second;
        if (tmp > ans) {
            ans = tmp;
        }
        ans += s[i].second;
    }
    cout << ans<<endl;
}