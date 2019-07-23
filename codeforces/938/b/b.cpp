#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6+5;
bool ch[N];
int n,l=1,r=1e6,ans,tmp;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){
   scanf("%d",&tmp);
   ch[tmp]=1;
}
while(l<r && n>0){
if(ch[l]){n--;}
if(ch[r]){n--;}
ans++;
l++;
r--;
}
printf("%d\n",ans-1);
    return 0;
}
