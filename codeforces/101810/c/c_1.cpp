#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


main()
{
    int t;
    ll n;

    scanf("%d" ,&t);

    while( t -- )
    {
        scanf("%lld" , &n);
        ll n2 = n-1ll;
        int cnt = 0;

        for(ll i = 0 ; i <= 50 ; i ++)
            cnt += ( (1ll << i) & n )!=((1ll << i) & n2);

        printf("%d\n" , cnt);
    }
}
