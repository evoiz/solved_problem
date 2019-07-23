#include <iostream>
using namespace std ;
int main() {
   int n, tmp, ans=1, pm=0, ptmp ,m;
   cin >> n >> ptmp ;
   n--;
   while(n--) {
      cin >> tmp ;
      if (tmp!= ptmp) {
         m = tmp - ptmp ;
         if (pm == 0 || m * pm < 0){ans++;}
         ptmp = tmp ;
         pm =m ;
      }
   }
   cout << ans << endl ;
}