#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=25;
int n, m;
char a[N],b[N];
map<string, string> mp;
string tmp;
int main() {
    scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%s%s",a,b);
		mp[string(b)] =string(a);
	}
	for (int i = 0; i < m; i++) {
		scanf("%s%s",a,b);
		tmp=mp[string(b).substr(0, strlen(b) - 1)];
		printf("%s %s #%s\n",a,b,tmp.c_str());
	}
	return 0;
}
/**
112233
(y)
456-654
**/
