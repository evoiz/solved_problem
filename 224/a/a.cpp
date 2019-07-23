#include <bits/stdc++.h>
using namespace std;
long long a,b,c,ans;
int main() {
    while(true){
    cin>>a>>b>>c;
     ans=sqrt(a*b/c)+sqrt(a*c/b)+sqrt(c*b/a);
     cout<<4*ans<<endl;

    return 0;
    }
}
/*
A=a*b
B=b*c
C=a*c
A*B=a*c*b*b==>A*B=C*b*b==>>b*b=A*B/C
ans=4(a+b+c)
*/