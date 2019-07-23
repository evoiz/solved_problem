#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e4+7,oo=1e9+7;
char s[N],c;
int  n,t,mem[N][28],l,q,r,tmp;
long long qurey(int l,int r,int c){
l--;
long long b=(1ll*(r/n)*mem[n-1][c])+(1ll*(r%n!=0)*(mem[r%n-1][c]));
long long a=(1ll*(l/n)*mem[n-1][c])+(1ll*(l%n!=0)*(mem[l%n-1][c]));
return (long long)b-a;
}
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&q);
scanf("%s",s);
memset(mem,0,sizeof mem);
        mem[0][s[0] - 'a']++;
		for (int i = 1; i < n; ++i) {
			for (int j = 0; j < 26; ++j)
				mem[i][j] = mem[i - 1][j];
			    mem[i][s[i] - 'a']++;
}
while(q--){
scanf("%d%d %c",&l,&r,&c);
long long ans=qurey(l,r,c-'a');
printf("%I64d\n",ans);
}

}
return 0;
}
/**
1
8 5
abcabdca
1 8 c
1 15 b

**/
