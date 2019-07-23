#include <bits/stdc++.h>
using namespace std;
const int N=2e5+6;
int m[N];
string sa,sb;
bool ok(string x,string y){
int l=0;
for(int i=0;i<x.length();i++){if(x[i]==y[l]){l++;}}
return l==y.length();
}
bool ch(int n){
    string tmp=sa;
    for(int i=0;i<n;i++){tmp[m[i]-1]=0;}
    string t;
    for(int i=0;i<tmp.length();i++){
        if(tmp[i]==0){continue;}
        t+=tmp[i];
    }
    ///cout<<t<<endl;
    return ok(t,sb);
}
int bsr(int l,int h){
   while(l<=h){
    int mid=(l+h)/2;
    if(ch(mid)){l=mid+1;}
    else{h=mid-1;}
   }
   return h;
}
int main(){
cin.sync_with_stdio(0);
cin.tie(0);
cin>>sa>>sb;
for(int i=0;i<sa.length();i++){cin>>m[i];}
///cout<<ch(3)<<endl;
int ans=bsr(0,sa.length()-1);
cout<<ans<<endl;
}
/**
7
1 2 4 6 5 3 7

**/
