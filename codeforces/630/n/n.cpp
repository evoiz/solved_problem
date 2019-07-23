#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
double a,b,c,ans,x1,x2;
int main(){
cin>>a>>b>>c;
ans=sqrt(b*b-4*a*c);
x1=(-b+ans)/(2*a);x2=(-b-ans)/(2*a);
cout<<setprecision(7)<<fixed<<max(x1,x2)<<endl<<min(x1,x2)<<endl;;
}
/**
0 1
1 6
2
10 * 6- 4*6;
**/
