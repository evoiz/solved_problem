#include <bits/stdc++.h>
using namespace std;
int n;
string s;
vector <string> m;
set <string> tmp;
bool com(string a,string b){
 return a + b < b + a;
}
int main() {
cin>>n;
for(int i=0;i<n;i++){cin>>s;m.push_back(s);}
sort(m.begin(),m.end(),com);
for(auto x:m){cout<<x;}
cout<<endl;
	return 0;
}
