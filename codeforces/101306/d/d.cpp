#include <bits/stdc++.h>
using namespace std;
map<char,char>mp;
void start(){
string s1="CARScarsIuVEJxTXsUvOHhngyZKfAYmaqolMNtGQibwdjPrCpekFWzLaySBaPybRMgzYMynY";
string s2="UnilEPFLvpVZzBNtLSCubWmaocIYneAPqxDshRkMGgJfHrFUQTjXOwdPolyProgisawesome";
for(int i=0;i<s1.length();i++){
///if(mp.find(s1[i])!=mp.end()&& mp[s1[i]]!=s2[i]){cout<<s1[i]<<endl;}
    mp[s1[i]]=s2[i];
    ///mp[s2[i]]=s1[i];
 }
mp['D']='K';
}
string s;
int n;
int main(){
start();
cin>>n;
while(n--){
cin>>s;
for(auto x:s){
    cout<<mp[x];
}
cout<<" ";
}
cout<<endl;
return 0;
}
/**
5 3 4
mars
mars
mars
elias
bittar
**/
