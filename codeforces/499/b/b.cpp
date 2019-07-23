#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()

{
int prsz,word;
cin>>word>>prsz;
pair <string , pair<string , bool> > pr[prsz];
for(int i=0;i<prsz;i++){
cin>>pr[i].first>>pr[i].second.first;
if((pr[i].first.length()) > (pr[i].second.first.length()))
{pr[i].second.second=1;}
}
int m[word];
for(int j=0;j<word;j++){
string in;
cin>>in;
for(int i=0;i<prsz;i++){if(in==pr[i].first){m[j]=i;break;}}
}
/////for(int j=0;j<word;j++){cout<<m[j]<<" ";}
for(int j=0;j<word;j++){
if(pr[m[j]].second.second){cout<<pr[m[j]].second.first<<" ";}
else{cout<<pr[m[j]].first<<" ";}
}
cout<<endl;
return 0;
}