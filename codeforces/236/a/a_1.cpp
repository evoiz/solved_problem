#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
set <char> st;

int main(){
string s;
cin>>s;
for(int i=0;i< s.length();i++){st.insert(s[i]);}
//cout<<st.size()<<endl;
if(st.size()%2==0){cout<<"CHAT WITH HER!"<<endl;}
else {cout<<"IGNORE HIM!"<<endl;}
return 0;
}