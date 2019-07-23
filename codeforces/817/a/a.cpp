#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const long long N=3e5+9;
long long x1,x2,y1,y2,dy,dx;
int main(){
cin>>x1>>y1>>x2>>y2>>dx>>dy;
bool ok=(!(abs(x1-x2)%dx) && !(abs(y2-y1)%dy) && ((abs(x1-x2)/dx)%2==(abs(y1-y2)/dy)%2));
//cout<<ok<<endl;
(ok?cout<<"YES"<<endl:cout<<"NO"<<endl);

}