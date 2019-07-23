#include <bits/stdc++.h>
using namespace std;
int n;
long long s,ans;
const int N=1e5+5;
pair<long long,long long>m[N];
bool com(pair<long long,long long>a,pair<long long,long long>b){
	if(a.first!=b.first){ return a.first<b.first;}
	 return  a.second<b.second;
}
int main(){
	scanf("%d%I64d",&n,&s);
	for(int i=0;i<n;i++){
		scanf("%I64d%I64d",&m[i].first,&m[i].second);
	}
	sort(m,m+n,com);
	for(int i=0;i<n;i++){
		 s+=m[i].first;
		ans+=(s-m[i].second);
	}
	printf("%I64d\n",ans);
	return 0;
}
/**
1 2 5 10 25 50
**/

