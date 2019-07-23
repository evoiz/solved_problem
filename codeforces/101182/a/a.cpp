#include <bits/stdc++.h>
using namespace std;
string tmp,a,b;
int n;
char tt(char x){
if(x=='P'){return 'S';}
if(x=='R'){return 'P';}
if(x=='S'){return 'R';}
}
char st(char x,char y){
if(x=='P' && y=='S'){return 'S';}
if(x=='P' && y=='R'){return 'P';}
//////////////////////////////
if(x=='R' && y=='S'){return 'R';}
if(x=='R' && y=='P'){return 'P';}
////////////////////////////
if(x=='S' && y=='P'){return 'S';}
if(x=='S' && y=='R'){return 'R';}
}
int main(){
    cin>>n>>a>>b;
for(int i=0;i<n;i++){
    if(a[i]!=b[i]){cout<<st(a[i],b[i]);continue;}
    cout<<tt(a[i]);
}
    return 0;
}
