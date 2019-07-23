#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const ll N=1e5+10; ll oo=1e10+10;
ll sum,tmp,n;
set<ll> st;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>tmp;st.insert(tmp);}
for(auto x:st){sum+=(x!=0);}
cout<<sum<<endl;
}
