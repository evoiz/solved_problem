#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef vector < ii > vii;
const int N = 2e5 + 5;
const ll INF = 1e12 + 7;

int n , mn , mx , sum;

main(){
    scanf("%d %d %d %d" , &n , &mn , &mx , &sum);

    if( (sum > ( mx*(n-1) + mn )) ||  ( sum < (mn*(n-1) + mx) ) ){
        printf("NO\n");
    }else printf("YES\n");
}
