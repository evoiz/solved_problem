#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
long long a,b,aa,bb,k;
bool ok;
int main(){
    cin>>aa>>bb>>a>>b>>k;
    for(long long i=a;i<=b;i++){
        if(k*i>=aa && k*i<=bb){ok=1;break;}
    }
    cout<<(ok?"YES":"NO")<<endl;
    return 0;
}