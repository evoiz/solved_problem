
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 1e5+4 , enf = -1e18-1;

struct node
{
    ll mxSum;
    ll sum;
    ll pref;
    ll suf;
};

ll a[N] , n , t , l , r;
node st[4*N];

void build(ll p  , ll l , ll r)
{
    if(l == r)
    {
        st[p].mxSum = st[p].sum = st[p].pref = st[p].suf =a[l];
        return;
    }
    ll mid =(l+r)/2;
    build(p*2 , l , mid);
    build(p*2+1 , mid+1 , r);

    st[p].sum = st[p*2].sum+st[p*2+1].sum;
    st[p].pref = max(st[p*2].pref , st[p*2+1].pref + st[p*2].sum);
    st[p].suf = max(st[p*2+1].suf , st[p*2].suf + st[p*2+1].sum);
    st[p].mxSum=max( max(st[p*2].mxSum,st[p*2+1].mxSum),max(st[p*2].sum+st[p*2+1].sum , st[p*2].suf+st[p*2+1].pref));
}

node rsq(ll p , ll l , ll r , ll S , ll E)
{
    if(l >= S && r <= E)return st[p];
    if(l > E || r <S)
    {
        node nd={enf,enf,enf,enf};
        return nd;
    }

    ll mid = (l+r)/2;
    node x = rsq(p*2 , l , mid , S , E);
    node y = rsq(p*2+1 , mid+1 , r , S , E);
    node z;
    if(x.sum == enf)return y;
    if(y.sum == enf)return x;
    z.sum = x.sum+y.sum;
    z.pref = max(x.pref , y.pref + x.sum);
    z.suf = max(y.suf , x.suf + y.sum);
    z.mxSum=max( max(x.mxSum,y.mxSum),max(x.sum+y.sum , x.suf+y.pref));
    return z;
}

void update(ll p , ll l , ll r , ll dx ,ll x)
{
    if(l == r)
    {
        st[p].mxSum = st[p].sum = st[p].pref = st[p].suf = x;
        return;
    }
    ll mid = (l+r)/2;
    if(dx <= mid)update(p*2 , l , mid , dx , x);
    else update(p*2+1 , mid+1 , r , dx , x);

    st[p].sum = st[p*2].sum+st[p*2+1].sum;
    st[p].pref = max(st[p*2].pref , st[p*2+1].pref + st[p*2].sum);
    st[p].suf = max(st[p*2+1].suf , st[p*2].suf + st[p*2+1].sum);
    st[p].mxSum=max( max(st[p*2].mxSum,st[p*2+1].mxSum),max(st[p*2].sum+st[p*2+1].sum , st[p*2].suf+st[p*2+1].pref));

}

main()
{
    ll m;
    scanf("%lld %lld",&n , &m);
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    build(1, 1 , n);

    for(int i = 1 ; i <= n ; i ++){
        update(1 , 1 , n , i , m);
        node nd = st[1];
        printf( "%lld " ,max(max(nd.mxSum , nd.pref) , max(nd.suf , nd.sum)));
        update(1 , 1 , n , i , a[i]);
    }
}

