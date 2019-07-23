#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int n;
int main(){
cin>>n;
cout<<"*";for(int i=0;i<n-2;i++){cout<<" ";};cout<<"* ";for(int i=0;i<n;i++){cout<<"*";}cout<<endl;
for(int j=0;j<n-2;j++){
cout<<"*";for(int i=0;i<n-2;i++){cout<<" ";}cout<<"* *";for(int i=0;i<n-2;i++){cout<<" ";}cout<<"*\n";
}
for(int i=0;i<n;i++){cout<<"*";}cout<<" *";for(int i=0;i<n-2;i++){cout<<" ";};cout<<"*";cout<<endl;
}
