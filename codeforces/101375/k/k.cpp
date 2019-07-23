#include <bits/stdc++.h>
using namespace std;
vector<string>v;
set<string>st;
string s;
char m[300];
int main(){
while((scanf("%s",m))!=EOF){s=(string)m;v.push_back(s);st.insert(s);}
s=v[v.size()-1];
if(s[s.length()-1]=='?'){cout<<"7"<<endl;return 0;}
bool ok=(st.find("Sussu")!=st.end())||(st.find("Sussu.")!=st.end())||(st.find("Sussu!")!=st.end());
if(ok){printf("AI SUSSU!\n");}
else{printf("O cara é bom!");}
}