#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N=1e6+7;
multiset<long long >st;
long long n,tmp,a[N];
pair<long long,long long>b[N];
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",&tmp);st.insert(tmp);}
for(int i=0;i<n;i++){scanf("%I64d",&b[i].f);b[i].s=i;}
sort(b,b+n);
reverse(b,b+n);
for(int i=0;i<n;i++){
  auto it=st.lower_bound(b[i].f);
  ///cout<<*it<<endl;
  a[b[i].s]=*it;
  st.erase(st.find(*it));
 }
 for(int i=0;i<n;i++){printf("%I64d ",a[i]);}
 printf("\n");
}
