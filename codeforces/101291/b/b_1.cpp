#include <bits/stdc++.h>
using namespace std ;
int r,l ;
set<long long> sum, all ;
vector<long long> a,b ;
void btc(long long n, long long h, int pos) {
   if (pos == b.size()) {
        if(n==h){sum.insert(n+h) ;}
   }
else{
   /////////////take
      btc(n+b[pos], h, pos+1) ;
      btc(n, h+b[pos], pos+1) ;
  /////////////leav
      btc(n, h, pos+1) ;
}
}
int main() {
    long long tmp;
   cin >> r >> l ;
   for (int i=0; i<r; i++){cin >> tmp;a.push_back(tmp);}
   for (int i=0; i<l; i++){cin >> tmp;b.push_back(tmp);}
   btc(0, 0, 0) ;
   for (auto x:a)
      for (auto y:sum)
         all.insert(x+y);
   for (auto w:all)
      cout << w << endl ;
}