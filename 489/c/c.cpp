#include <bits/stdc++.h>

using namespace std;
string mem[102][909];
void start(){
for(int i=0;i<102;i++){
   for(int j=0;j<909;j++) {mem[i][j]="-1";}
}

}
string solve (string in){
string ans=in;
reverse(ans.begin(),ans.end());
if(ans[0]!='0'){return ans;}
ans[0]='1';
for(int i=1;i<ans.length();i++){if(ans[i]!='0'){ans[i]--;return ans;}}
}
string int_to_sting(int in){
string ans="";
while(in){
  char c=(in%10)+'0';
    ans=c+ans;
    in/=10;
}
///reverse(ans);
return ans;
}
string dp(int dgit,int sum){
if(dgit==1 ){return int_to_sting(sum);}
if(mem[dgit][sum]!="-1"){return mem[dgit][sum];}
else{
    if(sum>9){mem[dgit][sum]='9'+dp(dgit-1,sum-9);}
    else {char out=sum+'0';mem[dgit][sum]=out+dp(dgit-1,0);}
 }
 return mem[dgit][sum];
}
int main()
{
 int a,b;
start();
 cin>>a>>b;
if(a==1 && b==0){cout<<"0 0"<<endl;return 0;}
if(!(b<=9*a && b>=1)){cout<<"-1 -1"<<endl;return 0;}
string ans=dp(a+1,b);
cout<<solve(ans)<<" "<<ans<<endl;

    return 0;
}