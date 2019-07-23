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
int a[N],b[N];
void solve(){
    scanf("%d" , &n);
 
    for(int i = 1 ; i <= n ; i ++){
        cin >> name[i];
        a[i]=i;
    }
 
    scanf("%d" , &m);
    for(int i = 0 ; i < m ; i ++){
        int u , v;
        scanf("%d %d" , &u , &v);
        a[u]=a[v];
        b[u]=b[v]+1;
    }
    for(int i=1;i<=b[1];i++){printf("I_love_");}
    printf("%s\n" , name[a[1]].c_str());
}
 
int main(){
    int t = 1;
    //scanf("%d" , &t);
 
    while( t -- ){
            solve();
    }
 
    return 0;
}
