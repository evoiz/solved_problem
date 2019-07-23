#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
using namespace std;
const int N=(2e5)+10;
const ll mod=1000000007ll;
int pr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47},n,m;
int main(){
sc(n);sc(m);
for(int i=0;i<14;i++){if(pr[i]==n && pr[i+1]==m){printf("YES\n");return 0;}}
printf("NO\n");
return 0;
}/*
**/
