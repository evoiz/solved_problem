#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<int>s;
int a1[16];
int Prime(int in) {
  for(ll i = 2; i * i <= in; ++i) {
    if(in % i == 0) return 0;
  }
  return 1;
}
void btc1(int pos) {
    if(pos == 16) {return;}
    int start = 0;
    for(int i = 0; i < pos; ++i) {start *= 2;start += a1[i];}
    for(int i = pos - 1; i >= 0; --i) {start *= 2;start+= a1[i];}
    if(a1[0] != 0 && Prime(start)) {s.insert(start);}
    ////take 0
    a1[pos] = 0;
    btc1(pos + 1);
    /////take 1
    a1[pos] = 1;
    btc1(pos + 1);
}

void btc2(int pos) {
    if(pos == 16) {return;}
    int start = 0;
    for(int i = 0; i < pos; ++i) {start *= 2;start += a1[i];}
    for(int i = pos - 2; i >= 0; --i) {start*= 2;start+= a1[i];}
    if(a1[0] != 0 && Prime(start)){ s.insert(start);}
    ///////////take 0
    a1[pos] = 0;
    btc2(pos + 1);
    /////////take 1
    a1[pos] = 1;
    btc2(pos + 1);
}
void slove(int x){
  int ans[33];
  int con = 0;
  while(x){ans[con++] = x%2;x /= 2;}
  for(int i = con - 1; i >= 0; --i){printf("%d", ans[i]);}
  printf("\n");
}
int main() {
    btc1(0);
    btc2(0);
    s.insert(0);
  int co;
  char inp[32];
  while( scanf(" %s", inp) != EOF ){
    int len = strlen(inp);
    co = 0;
    for(int i = 0; i < len; ++i){co *= 2;co += (inp[i]=='1');}
    set<int>::iterator it = s.lower_bound(co);
    slove(*it);
  }
  return 0;
}