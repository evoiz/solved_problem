#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int n,m[N],a,b;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>m[i];}
int i=0,j=n-1;
bool s=1;
while(i<=j){
    if(i==j){
        if(s){a+=m[i];break;}
        if(!s){b+=m[i];break;}
    }
    if(s){
     s=0;
     if(m[i]>m[j]){a+=m[i];i++;continue;}
     if(m[j]>m[i]){a+=m[j];j--;continue;}
    }
    s=1;
    if(m[i]>m[j]){b+=m[i];i++;continue;}
    if(m[j]>m[i]){b+=m[j];j--;continue;}
}
cout<<a<<" "<<b<<endl;
return 0;
}

/**
0 0 0 0 0 last=0; ans=0;
1 1 1 1 1 last=1; ans+=abs(last-m[i]);
2 2 2 2 2 last=2; ans+=abs(last-m[i]);


1 1 2 2 2 1 1
**/
