#include <bits/stdc++.h>

using namespace std;
int main()
{
  set<long long > st;
  long long a;
  for(int i=0;i<4;i++){cin>>a;st.insert(a);}
  cout<<4-st.size()<<endl;
    return 0;
}
