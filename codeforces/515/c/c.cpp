#include <bits/stdc++.h>
using namespace std;
string m[10]={"","","2","3","322","5","53","7","7222","7332"};
string in,out;
int n;
int main(){
    cin>>n;
cin>>in;
for(auto x:in){out+=m[x-'0'];}
sort(out.begin(),out.end(),greater<char>());
cout<<out<<endl;
}

