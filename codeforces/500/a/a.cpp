#include <bits/stdc++.h>

using namespace std;

bool ok;
int n, t,tmp;
int  m[10000000];

void dfs(int i)
{
    if (i == t - 1){ok = 1;  return;}
    if (i < n - 1){dfs(m[i]+i);}
}

int main(){
    scanf("%d%d", &n,&t);
    for (int i = 0; i < n - 1; i++){scanf("%d", &tmp);m[i]=tmp;}

    dfs(0);
    (ok ? printf("YES") : printf("NO"));
}