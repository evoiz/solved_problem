#include <bits/stdc++.h>
using namespace std;
bool ok=0;
long long n,a,b;
string s;
int main() {
scanf("%I64d",&n);
while(n--){
    cin>>s>>a>>b;
    ok=ok||((b-a>0)&&(a>=2400));
}
cout<<(ok?"YES\n":"NO\n");
}
