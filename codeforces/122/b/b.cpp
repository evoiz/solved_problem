#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
map<char,long long>mp;
int main(){
cin>>s;
mp['7']++;
mp['4']++;
for(auto x:s){mp[x]++;}
if(mp['4']==1&&mp['7']==1){cout<<-1<<endl;return 0;}
(mp['7']>mp['4']?cout<<7<<endl:cout<<4<<endl);
}
/*
1 4 9 16
*/
