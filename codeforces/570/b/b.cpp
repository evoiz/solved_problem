#include <bits/stdc++.h>

using namespace std;
long long  a,b;

int main() {
    cin>>a>>b;
    if(a==1){cout<<1<<endl;return 0;}
    if(b>(a/2)){cout<<b-1<<endl;return 0;}
    cout<<b+1<<endl;
    return 0;
}
