#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
int m[4][4],sum;
int main(){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){cin>>m[i][j];sum+=m[i][j];}
}
sum/=2;
m[0][0]=sum-m[0][1]-m[0][2];
m[1][1]=sum-m[1][0]-m[1][2];
m[2][2]=sum-m[2][0]-m[2][1];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){cout<<m[i][j]<<" ";}
    cout<<endl;
}
}
/**
x
(sum1-x)+(sum2-x)+(sum3-x)=x;
(sum1+2+3)-3x=x;
sum1+2+3=2x
**/
