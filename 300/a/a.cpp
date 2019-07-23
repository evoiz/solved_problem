#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long n,m[102];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>m[i];
    }
    sort(m,m+n);
    if(m[1]<0  && m[2]<0){
        cout<<1<<" "<<m[0]<<endl;
        cout<<2<<" "<<m[1]<<" "<<m[2]<<endl;
        cout<<n-3<<" ";
        for(int i=3;i<n;i++){cout<<m[i]<<" ";}
        cout<<endl;
    }
    else{
       cout<<1<<" "<<m[0]<<endl;
       cout<<1<<" "<<m[n-1]<<endl;
       cout<<n-2<<" ";
       for(int i=1;i<n-1;i++){cout<<m[i]<<" ";}
        cout<<endl;
    }
}
