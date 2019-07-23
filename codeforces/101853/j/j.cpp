#include<bits/stdc++.h>
using namespace std;


const int N = 1e4 + 4;

int t , n;
int freq[N] , a[N];

main()
{
    scanf("%d" , &t);

    while( t -- )
    {
        memset(freq , 0 , sizeof freq);

        scanf("%d" ,&n);

        for(int i = 0 ; i < n ; i ++)
        {
            scanf("%d" , &a[i]);
            freq[a[i]] ++;
        }

        int mx = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            int tmp = max( freq[a[i]-1] + freq[a[i]] , freq[a[i]+1] + freq[a[i]] );
            mx = max(tmp , mx);
        }

        printf("%d\n" , mx);
    }
}
