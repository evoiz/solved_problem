#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
set<char> st;
string s;
int main(){
cin>>s;
for(int i=0;i<s.length();i++){st.insert(s[i]);}
if(st.size()%2==1){cout<<"IGNORE HIM!";}
else{cout<<"CHAT WITH HER!";}
}
