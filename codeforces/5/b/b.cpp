#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
int mx,tmp,str;
string s;
void e(){
str=mx+2;
	for(int i=0;i<str;i++){
        printf("*");
	}
	printf("\n");
}
bool ok=1;
void pr(string in){
    int pfx=((mx-(in.length()))/2);
    if((mx-(in.length()))%2){
        ok=!ok;
        pfx+=ok;
    }
    int sfx=mx-(pfx+(in.length()));
   ///cout<<pfx<<"\t"<<mx<<" "<<in.length()<<endl;
   printf("*");
   for(int i=0;i<pfx;i++){printf(" ");}
   cout<<in;
    for(int i=0;i<sfx;i++){printf(" ");}
    printf("*\n");
}
int main() {
	while(getline(cin,s)){
       ans.push_back(s);
       tmp=(s.length());
       mx=max(mx,tmp);
	}
	e();
	for(auto x:ans){
          /// cout<<x<<endl;
     pr(x);
	}
	e();

}
