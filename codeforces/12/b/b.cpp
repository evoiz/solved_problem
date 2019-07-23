#include <bits/stdc++.h>
using namespace std;
string a,b,tmp;
int main(){
cin>>a>>b;
sort(a.begin(),a.end());
for(long long i=0;i<a.length();i++){
    if(a[i]!='0'){swap(a[0],a[i]);break;}
 }
 ///cout<<tmp<<endl;
 cout<<(a==b?"OK":"WRONG_ANSWER")<<endl;
}
