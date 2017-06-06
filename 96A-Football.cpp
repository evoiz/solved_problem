#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string zero="0000000",one="1111111";
   size_t found = s.find(zero);
   if (found!=std::string::npos){cout << "YES" <<endl;return 0;}
    size_t fou = s.find(one);
   if (fou!=std::string::npos){cout << "YES" <<endl;return 0;}
   cout<<"NO"<<endl;
return 0;
}
