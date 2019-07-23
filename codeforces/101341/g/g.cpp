
#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 2e5 + 5;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

int n , m;
string name[N];
ii ans[N];

void solve(){
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i ++){
        cin >> name[i];
        ans[i].second = i;
    }

    scanf("%d" , &m);
    for(int i = 0 ; i < m ; i ++){
        int u , v;
        scanf("%d %d" , &u , &v);

         ans[u] = {1 + ans[v].first , ans[v].second};
    }
    while(ans[1].first){
        printf("I_love_");
        ans[1].first --;
    }
    printf("%s\n" , name[ ans[1].second ].c_str());
}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}

