#include <bits/stdc++.h>
using namespace std;
string s;
int ans;
map<char,int>mp;
int main(){
cin>>s;
for(auto x:s){mp[x]++;}
for(auto x:mp){ans+=(x.second%2!=0);}
if(ans%2!=0||ans==0){cout << "First" << endl;return 0;}
        cout << "Second" << endl;
}
/**

**/
