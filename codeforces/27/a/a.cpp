#include <bits/stdtr1c++.h>
using namespace std;
int tmp,n;
set<int>st;
int main(){
cin>>n;
while(n--){cin>>tmp;st.insert(tmp);}
for(int i=1;i<=300000;i++){
if(!(st.find(i)!=st.end())){cout<<i<<endl;return 0;}
}

}
