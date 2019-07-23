#include <bits/stdc++.h>
using namespace std;
const int N=200;
vector<int> v;
int n,mx,tmp,eshara;
int main() {
cin>>n;
while(n--){cin>>tmp;v.push_back(tmp);}
for(int i=1;i<v.size();i++){
if(v[i]>v[i-1]){if(eshara!= 0){cout<<"NO"<<endl;return 0;}}
else if(v[i]<v[i-1]){eshara=2;}
else{if(eshara==2){cout<<"NO"<<endl;return 0;}else{eshara=1;}}
}
cout<<"YES"<<endl;
return 0;
}
