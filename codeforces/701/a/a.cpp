#include <bits/stdc++.h>

using namespace std;
const int N=1e2+7;
int sum,tmp,n,m[N];
set <int> v[N];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        m[i]=tmp;
        sum+=tmp;
        v[tmp].insert(i);
	}
	sum/=n/2;
	for(int i=0;i<n;i++){
       if(v[m[i]].find(i)!=v[m[i]].end()){
         tmp=*v[sum-m[i]].upper_bound(i);
         v[sum-m[i]].erase(v[sum-m[i]].upper_bound(i));
         printf("%d %d\n",i+1,tmp+1);

       }
	}
   return 0;
}
