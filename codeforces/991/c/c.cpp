#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll n, k;
const int N= 200000;
bool prime[N+5], isprime[N+5];
vector< int > v;
bool f(ll k){
	ll p = n ;
	ll tot = 0 ;
	while(p > 0){
		tot += min(k, p) ;
		p -=min(k, p) ;
		p-= p/10 ;
	}
	if(tot * 2 >= n) return 1 ;
	return 0 ;
}

void sieve(){
    v.pb(2) ; prime[ 1 ] = 1;
    int limit = (int)sqrt(N);
    for(int i = 4 ; i <= N ; i += 2) prime[ i ] = 1 ;
    for(int i = 3; i <= N; i += 2){
        if(!prime[i]){
            v.pb(i);
            if(i <= limit){
                for(int j = i*i; j <= N; j += 2*i ) prime[j] = 1 ;
            }
        }
    }
}
int main(){
    cin>>n ;
	ll l = 1, r = n, m = 0, ans = n ;
	while(l <= r){
		m = (l+r)/2 ;
		if( f(m) ) {
			ans = m ;
			r = m-1 ;
		}
		else {
			l = m+1 ;
		}
	}
	cout<<ans ;
    return 0 ;
}
/**
**/
