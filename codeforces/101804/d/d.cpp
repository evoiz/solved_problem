#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;


int n;
double st[4*N] , a[N];

void build(int p , int l , int r)
{
    if(l == r){
        st[p] = a[l];
        return;
    }

    int mid = (l+r )/2;

    build(p*2 , l , mid);
    build(p*2+1 , mid+1 , r);

    st[p] = st[p*2] + st[p*2+1];
}

void update(int p , int l , int r , int dx, double x)
{
    if(l == r)
    {
        st[p] = x;
        return;
    }

    int mid = (l+r)/2;

    if(dx > mid)
        update(p*2+1 , mid+1 , r , dx, x );
    else update(p*2 , l , mid , dx , x);

    st[p] = st[p*2] + st[p*2+1];
}

double rsq(int p , int l , int r , int S , int E)
{
    if(r < S || l > E)return 0;

    if(l >= S && r <= E)
        return st[p];

    int mid = (l+r)/2;

    double x = rsq(p*2 , l , mid , S , E);

    double y = rsq(p*2+1 , mid+1 , r , S , E);

    return x+y;
}

main()
{
    scanf("%d" ,&n);

    for(int i=1;i<=n;i++)
        scanf("%lf" , &a[i] );

    build(1 , 1 , n);

    int q , type;
    scanf("%d" , &q);

    double x;
    int dx , l , r;
    while(q --)
    {
        scanf("%d" , &type);

        if(type == 1)
        {
            scanf("%d %lf" , &dx , &x);
            update(1 , 1 , n , dx , x);
        }
        else
        {
            scanf("%d %d" ,&l , &r);

            printf("%.9f\n" , rsq(1 , 1 , n , l , r)/(r-l+1.0));
        }
    }

}
