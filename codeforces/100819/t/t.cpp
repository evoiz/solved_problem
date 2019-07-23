#include<bits/stdc++.h>
using namespace std;
bool ch(long long a,long long b,long long c){
return c*c==(a*a)+(b*b);
}
long long n,x[3],y[3];
string a,b;
int main(){
   for(int i=0;i<3;i++){cin>>x[i];}
    for(int i=0;i<3;i++){cin>>y[i];}
    sort(x,x+3);
    sort(y,y+3);
     for(int i=0;i<3;i++){if(x[i]!=y[i]){cout<<"NO"<<endl;return 0;}}
     cout<<(ch(x[0],x[1],x[2])?"YES":"NO")<<endl;
}
/**
4 3
2 BROKEN
2 BROKEN
1 SAFE
3 BROKEN

**/
