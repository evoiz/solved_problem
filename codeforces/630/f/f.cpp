#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
long long n,ans;
int main(){
    cin>>n;
    ans=n*(n - 1)/2*(n - 2)/3*(n - 3)/4*(n - 4)/5*(n - 5)/6*(n - 6)/7;
    ans+=n*(n - 1)/2*(n - 2)/3*(n - 3)/4*(n - 4)/5*(n - 5)/6;
    ans+=n*(n - 1)/2*(n - 2)/3*(n - 3)/4*(n - 4)/5;
    cout<<ans<<endl;
}
/**
segma(x)-segma(k-1)=n;
(x*x+1/2)-(k*k-1/2)--const--=n--const--;
con=n+segma(k-1);
x^2+x-2con=0;
delta=sqrt(1+4con);
ans=delta-1/2;
test:
n=4 k=3;
n=3 k=2;
con=3+1=4;
delta=1+16;

**/

