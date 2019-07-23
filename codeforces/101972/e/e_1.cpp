#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 4;

int n , m , k  , x , ans = 0;
char ch;
int SB[N];

void init()
{
	memset(SB , 0 , sizeof SB);
	ans = 0;
}

int main() {
	
	
	int t;
	
	scanf("%d" , &t);
	
	
	while( t -- )
	{
		
		init();
		
		scanf("%d %d %d" , &n , &m , &k);
		
		for(int i = 1 ; i <= n ; i ++)
		{
			cin >> ch;
			if(ch == 'S')SB[i] = 1;
		}
		
		while( m -- )
		{
			cin >> ch;
			
			if(ch == 'A')k = max(k , n);
			else 
			{
				scanf("%d" , &x);
				
				if( (x <= k) && (SB[x]) )ans ++;
				
				k = max(k , x);
			}
		}
		
		printf("%d\n" , ans);
		
	}
	
	return 0;
}