#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m[6];
    for(int i=0;i<6;i++){cin>>m[i];}
    cout<< 2*((m[0]*m[1])+(m[2]*m[3])+(m[4]*m[5]))-((m[0]-m[3])*(m[3]-m[0])) <<'\n';
}