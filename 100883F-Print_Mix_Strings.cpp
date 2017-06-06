#include <bits/stdc++.h>

using namespace std;

set<vector<char> > ans;
string a,b;
vector <char> tmp;
void btc(int i,int j){
if(tmp.size()==(a.length()+b.length())){ans.insert(tmp); return;}
if(i<a.length()){
tmp.push_back(a[i]);
btc(i+1,j);
tmp.pop_back();
}
if(j<b.length()){
tmp.push_back(b[j]);
btc(i,j+1);
tmp.pop_back();
}
}
int n;
int main(){
    cin>>n;
while(n--){
ans.clear();
tmp.clear();
cin>>a>>b;
btc(0,0);
///cout<<ans.size()<<endl;
for(auto x:ans){
    for(auto y:x){cout<<y;}
    cout<<endl;
}
cout<<endl;
}

return 0;
}
