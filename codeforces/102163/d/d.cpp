#include<bits/stdc++.h>
using namespace std;

using ll = long long;

typedef pair < int , int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
const int N = 1e5 + 5;
const ll INF = 1e12;

main(){
    int t;

    scanf("%d" , &t);

    while( t -- ){
        int x , y;
        scanf("%d %d" , &x , &y);

        printf("%s\n" , x > y ? "Bashar" : x < y ? "Hamada" : "Iskandar");
    }
}