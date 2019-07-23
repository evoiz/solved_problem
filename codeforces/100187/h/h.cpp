#include<bits/stdc++.h>
using namespace std;

typedef pair < double , double > dd;

const double eps = 1e-9;

dd a[5] , b[5];

double A[5] , B[5] , ans[5];



double D(dd a , dd b)
{
    double x1 = a.first , y1 = a.second;
    double x2 = b.first , y2 = b.second;

    x1 -= x2;
    x1 *= x1;

    y1 -= y2;
    y1 *= y1;

    x1 += y1;

    return sqrt( x1 );
}

main()
{
    for(int i = 0 ; i < 3 ; i ++)
        scanf("%lf %lf" , &a[i].first , &a[i].second);

    A[0] = D(a[0] , a[1]);
    A[1] = D(a[0] , a[2]);
    A[2] = D(a[1] , a[2]);

    for(int i = 0 ; i < 3 ; i ++)
        scanf("%lf %lf" , &b[i].first , &b[i].second);

    B[0] = D(b[0] , b[1]);
    B[1] = D(b[0] , b[2]);
    B[2] = D(b[1] , b[2]);

    sort(A , A+3);
    sort(B , B+3);

    for(int i = 0 ; i < 3 ; i ++)
       ans[i] = ( A[i] / B[i] );

    if( abs( ans[0] - ans[1] ) < eps )
    {
        if( abs( ans[0] - ans[2] ) < eps )
        {
            if(abs( ans[1] - ans[2] ) < eps)
            {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
}
