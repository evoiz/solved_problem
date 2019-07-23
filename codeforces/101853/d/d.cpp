#include<bits/stdc++.h>
using namespace std;

int t , n , cnt = 0 , x;

main()
{
    scanf("%d" , &t);

    while( t -- )
    {
        scanf("%d" , &n);
        cnt = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            scanf("%d" , &x);
            if(x > 0)cnt ++;
        }
        printf("%d\n" , cnt);
    }
}
