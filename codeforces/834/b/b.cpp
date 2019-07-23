#include<bits/stdc++.h>
using namespace std;
map<char, int>mp;
set<char>open;
int n, k;
string s;
int main(){
    cin>>n>>k>>s;
    for (int i=0;i<s.length();i++) {mp[s[i]] = i;}
    for (int i = 0; i < n; i++) {
        open.insert(s[i]);
        if (open.size()>k){cout << "YES" << endl;return 0;}
        if (mp[s[i]]==i){open.erase(s[i]);}
    }
 cout<<"NO"<<endl;
    return 0;
}
