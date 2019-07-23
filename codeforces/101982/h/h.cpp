#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 1e6 + 10;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

int x;
bool prime[N];
vi primes;

void seive(){
    prime[0] = prime[1] = 1;
    for(int i = 2 ; i < N ; i ++){
        if(!prime[i]){
            primes.push_back(i);
            for(int j = i+i ; j < N ; j += i){
                prime[j] = 1;
            }
        }
    }
}

void solve(){
    seive();
    scanf("%d" , &x);

    int ans = 0;
    while( x >= 4 ){
        ans ++;
        while(true){
            bool ok = 0;
            int dx = upper_bound(primes.begin() , primes.end() , x) - primes.begin();
            while(true){
                dx --;
                if(dx < 0)break;
                if(!prime[ x - primes[dx] ]){
                    //cout << x << " " << primes[dx] << endl;
                    x = primes[dx] - (x - primes[dx]);
                    //cout << x << endl;
                    ok = 1;
                    break;
                }
            }
            if(ok)break;
        }
    }

    printf("%d\n" , ans);
}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}




