#include<bits/stdc++.h>

using namespace std;


using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using li  = pair < ll , int >;
using vi  = vector < int >;
using vl  = vector < ll >;
using vii = vector < ii >;
using vli = vector < li >;
using vi3 = vector < i3 >;


const int N = 2e5 + 5;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

int n;
vi S;

void solve(){
    scanf("%d" , &n);
    for(int i = 0 ; i < 2*n ; i ++){
        string s;
        int x;
        cin >> s >> x;
        if(s == "in"){
            if(S.size() > 0)printf("%d %d\n" , S.back() , x);
            S.push_back(x);
        }
        else S.pop_back();
    }
}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}


