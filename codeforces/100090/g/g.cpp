#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N = 2e5 + 5;
 
int freq[30];
bool fix[30];
char s[N];
 int main(){
    scanf("%s" , s);
    int n = strlen(s);
    if(n > 26){
        printf("IMPOSSIBLE");
        return 0;
    }
    for(int i = 0 ; s[i] ; i ++){
        if(freq[ s[i] - 'a' ] == 0){
            fix[i] = 1;
            freq[ s[i] - 'a' ] ++;
        }
    }
    for(int i = 0 ; s[i] ; i ++){
        if(fix[i])continue;
        for(int j = 0 ; j < 26 ; j ++){
            if(freq[j] == 0){
                s[i] = char(j + 'a');
                break;
            }
        }
        freq[ s[i] - 'a' ] ++;
    }
 
    printf("%s\n" , s);
 
    return 0;
}
/**
3 2
2 3 5
15
moveLeft
insertLeft 1
moveLeft
print
moveLeft
moveRight
print
moveRight
insertRight 4
moveRight
moveRight
print
moveRight
moveLeft
print
**/