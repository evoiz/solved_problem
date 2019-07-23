#include <bits/stdc++.h>

using namespace std;
int m[7];
int solve(int x){
int i,sum=0;
for(i=0;i<7;i++){sum+=m[i];if(sum>=x){break;}}
return i+1;
}
int main()
{
  int sum=0,in_sum,tmp;cin>>in_sum;
  for(int i=0;i<7;i++){cin>>m[i];sum+=m[i];}
  if(in_sum>sum){
        while(in_sum>sum){in_sum-=sum;}
        cout<<solve(in_sum);
  }
  else{cout<<solve(in_sum);}
    return 0;
}