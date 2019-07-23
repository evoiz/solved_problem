#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int n,ans,tmp;
int main(){
 scanf("%d",&n);
 while(n--){scanf("%d",&tmp);ans^=tmp;}
 printf("%d",ans);
    return 0;
}
/**
3 4
1 2 3
7
s 1 3 2
+ 2 1
s 1 3 3
- 2 1
- 3 1
s 1 3 2
- 1 2

2
3
6
2
2
4
1
**/
