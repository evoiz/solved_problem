/** after along time **/
#include <bits/stdc++.h>
using namespace std;
vector <string > v,ans;
int n,cur,co;
string s;
bool ok=0;
void dfs(){
if(cur<v.size()){
       if(v[cur]=="int"){ans.push_back(v[cur]);cur++;ok=1;return;}
       ans.push_back(v[cur]);
       ans.push_back("<");cur++;dfs();
       ans.push_back(",");dfs();
       ans.push_back(">");
        return  ;
    }
    else {ok =0;return ;}
}
int main(){
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(cin>>s){v.push_back(s);}
   dfs();
    if( ok && cur==v.size()){
        for(auto x:ans){cout<<x;}
        cout<<endl;
    }
    else {cout<<"Error occurred"<<endl;}
    return 0;
}
