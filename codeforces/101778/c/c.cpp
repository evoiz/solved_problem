#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e6+10;
ll t,n,phi[N+3];
void sieve_phi(){
    for(int i=1; i<=N; i++)
    {
        phi[i]=i;
    }
    for(int i=2; i<N; i++)
    {
        if ( phi[i] == i )
        {
            for ( int j=i; j<N; j+=i )
            {
                phi[j]/=1ll*i;
                phi[j]*=1ll*i-1;
            }
        }
    }
}
int main()
{

    sieve_phi();
    scanf("%lld",&t);
    while(t--){
    scanf("%lld",&n);
    ll ans=(n-1ll)*phi[n];
    printf("%lld\n",ans);
    }
    return 0;
}