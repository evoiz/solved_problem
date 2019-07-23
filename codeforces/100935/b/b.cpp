#include <bits/stdc++.h>
using namespace std;
string s[10005];
 int n,t=1,m[10005],ans[10005];
int main() {
while(true){
        scanf("%d",&n);
		if(!n)break;
		memset(ans,0,sizeof ans);
		for(int i=0; i<n; i++) {
			cin>>s[i];
			m[i]=1;
		}
		sort(s,s+n);
        int j=0;
		for(int i=1; i<=n; i++) {
			if(s[i]==s[i-1])m[j]++;
			else j++;
		}
		int maxx=0;
		for(int i=0;i<j;i++){
				maxx=max(m[i],maxx);
			for(int k=0;k<m[i];k++){
				ans[k]++;
			}
		}
		printf("Case %d: ",t++);
		for(int i=maxx-1;i>=0;i--){
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	return 0;
}