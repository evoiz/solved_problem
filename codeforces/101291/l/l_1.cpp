#include <bits/stdc++.h>
using namespace std ;
int main() {
   int m[6] ;
   for (int i=0; i<6; i++){cin >> m[i] ;}
   int mr = m[0]*m[1] + m[2]*m[3] + m[4]*m[5] ;
   int s = (int)sqrt(mr) ;
   bool ans= 0 ;
   if (s * s == mr) {
      int ok = -1 ;
      for (int i=0; i<6; i += 2)
        if (m[i] == s || m[i+1] == s) {
            swap(m[4], m[i]) ;
            swap(m[5], m[i+1]) ;
            ok = 2 * s - m[4] - m[5] ;
         }
      if (ok > 0) {
         if (((m[0] == s || m[1] == s) && (m[2] == s || m[3] == s)) ||((m[0] == ok || m[1] == ok) && (m[2] == ok || m[3] == ok))){ans=1;}
      }
   }
   cout << (ans ? "YES" : "NO") << endl ;
}