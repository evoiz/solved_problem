#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    scanf("%d" , &t);

    while(t --)
    {
        int n;
        scanf("%d" , &n);

        n = sqrt(n/6);
        printf("%d\n" , n);
    }
}
