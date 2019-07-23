#include<bits/stdc++.h>
using namespace std;
set<pair<string,string>>st;
long long n;
string a,b;
int main(){
    cin>>n;
    while(n--){cin>>a>>b;st.insert({b,a});}
    for(auto x:st){
        cout<<x.second<<" "<<x.first<<endl;
    }
}
/**
4 3
2 BROKEN
2 BROKEN
1 SAFE
3 BROKEN

**/
