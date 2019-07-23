#include <bits/stdc++.h>
#define s second
#define f first
using namespace std;
long long  x1,x2,y1,y2,d1,d2;
int main(){
cin>>x1>>y1>>x2>>y2;
d1=(x1*x1)+(y1*y1);
d2=(x2*x2)+(y2*y2);
if(d1<d2){cout<<"Russo"<<endl;return 0;}
if(d2<d1){cout<<"Wil"<<endl;return 0;}
cout<<"Empate"<<endl;
}