#include <bits/stdc++.h>
using namespace std;
int t,n;
map<string, int> mp;
string s;
int main() {
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d\n", &n);
    mp.clear();
    while (n--) {
      getline(cin,s);
      mp[s]++;
    }
    for(auto x:mp){cout<<x.first<<" "<<x.second<<endl;}
    if (t > 0) {printf("\n");}
  }
}
