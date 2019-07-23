#include <bits/stdc++.h>

using namespace std;

int t;
string s,mirrored="AHIMOTUVWXY";
char c[1005];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int ans=0;
        scanf("%s",c);
        s=(string)c;
        for (int i=0;i<s.length();i++){
            int x=0;
            if (mirrored.find(s[i])<=mirrored.length()){
                x++;
                int r=i+1,l=i-1;
                while(l>=0&&r<s.length()){
                    if (s[l]==s[r]&&mirrored.find(s[l])<=mirrored.length()){x+=2;r++;l--;}
                    else{break;}
                }
                ans=max(ans,x);
            }
        }
for (int i=0;i<s.length()-1;i++){
int x=0;
if (s[i]==s[i+1]&&mirrored.find(s[i])<=mirrored.length()){
x+=2;
int l=i-1,r=i+2;
while(l>=0&&r<s.length()){
if (s[l]==s[r]&&mirrored.find(s[l])<=s.length()){x+=2;l--;r++;}
else{break;}
}
ans=max(ans,x);
}
}
        printf("%d\n",ans);
    }
    return 0;
}
