#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+9;
ll n,a[N],mn=1e9+7,ptr;
int main() {
    cin >> n;
    for(int i = 0 ; i < n ; i++){scanf("%lld",a+i),mn=min(mn,a[i]);}
    int ctr=0;
    while(mn>=n){
        ctr++;
        mn-=n;
    }
    for(int i = 0 ; i < n ; i++)a[i]-=(n*ctr);
    int ptr = 0;
    int s = 0;
    while(a[ptr]!=0){
        a[ptr]=max(0ll,a[ptr]-s);
        s++;
        if(a[ptr]==0)break;
        ptr++;
        ptr=ptr%n;
    }
    cout << ptr+1;


}

/**
2
R23C55
BC23

**/
