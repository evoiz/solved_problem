#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef pair < int , ii > i3;
typedef vector < i3 > vi3;
typedef vector < ii > vii;
typedef vector < int > vi;

const int N = 2010 + 5;
const ll INF = 1e15;
const double eps = 1e-12 , PI = acos(-1);

int n , m;
char op[N];
char a[N][N];
char ans[N][N];

int l = 0 , r = 0;

void L(){
    //cout << "L\n";
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){

                 if(a[i][j] == '^')a[i][j] = '<';
            else if(a[i][j] == '>')a[i][j] = '^';
            else if(a[i][j] == '<')a[i][j] = 'v';
            else if(a[i][j] == 'v')a[i][j] = '>';

            ans[n-j+1][i]=a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
	   for(int j=1;j<=n;j++){
	      a[i][j]=ans[i][j];
	   }
	   
	}
	
}

void R(){
    //cout << "R\n";
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){

                 if(a[i][j] == '^')a[i][j] = '>';
            else if(a[i][j] == '>')a[i][j] = 'v';
            else if(a[i][j] == '<')a[i][j] = '^';
            else if(a[i][j] == 'v')a[i][j] = '<';

            ans[j][n-i+1] = a[i][j];
        }
    }
     for(int i=1;i<=n;i++){
	   for(int j=1;j<=n;j++){
	      a[i][j]=ans[i][j];
	   }
	   
	}
}

void flp(){
    //cout << "flp\n";
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){

                 if(a[i][j] == '^')a[i][j] = 'v';
            else if(a[i][j] == 'v')a[i][j] = '^';
            else if(a[i][j] == '>')a[i][j] = '<';
            else if(a[i][j] == '<')a[i][j] = '>';

            ans[n-i+1][j] = a[i][j];
        }
    }
}

int main(){
    scanf("%d" , &n);
    scanf("%s" , op);

    for(int i = 1 ; i <= n ; i ++){
        scanf("%s" , a[i] + 1);
        for(int j = 1 ; j <= n ; j ++){
            ans[i][j] = a[i][j];
        }
    }

    for(int i = 0 ; op[i] ; i ++){
        if(op[i] == 'L')l ++;
        else r ++;
    }

    r %= 4;
    l %= 4;
    for(int i=0;i<r;i++){
	  R();
	}
	for(int i=0;i<l;i++){
	  L();
	}
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            printf("%c" , ans[i][j]);
        }printf("\n");
        //ans[i][n+1] = '\0';

        //printf("%s\n" , ans[i]);
    }

    return 0;
}

