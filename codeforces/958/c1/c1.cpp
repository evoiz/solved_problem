
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5 + 5;

ll n , sum , p , mx = 0;
ll a[N];

main()
{
    scanf("%lld %lld" ,&n ,&p);

    for(int i=0;i<n;i++)
        scanf("%lld" , &a[i]);

    sum = a[0];
    for(int i=1;i<n;i++){
        sum += a[i];
        a[i] += a[i-1];
    }

    for(int i=1;i<n;i++){
        mx = max(mx , (sum-a[i-1])%p + (a[i-1])%p);
    }

    printf("%lld\n" , mx);
}
