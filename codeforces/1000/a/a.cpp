#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+9;
map<string,int> a,b;
int n,ans;
string s;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>s;a[s]++;}
for(int i=0;i<n;i++){
    cin>>s;
    b[s]++;
    if(a[s]!=0){a[s]--;b[s]--;}
}
for(auto x:b){ans+=abs(x.S);}
cout<<ans<<endl;
}
/**
2
R23C55
BC23

**/
