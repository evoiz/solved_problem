#include<bits/stdc++.h>
using namespace std;

const int N = 2222;

int a[N];

main()
{
    int t , n;
    scanf("%d" , &t);

    while( t -- )
    {
        scanf("%d" , &n);

        for(int i = 1 ; i <= 2*n ; i ++)
            scanf("%d" , &a[i]);

        int mx = 0;

        for(int i = 1 ; i <= n ; i ++)
            mx = max(mx , a[i] + a[2*n-i+1]);

        printf("%d\n" , mx);
    }
}
