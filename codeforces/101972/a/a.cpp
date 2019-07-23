#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string x , y;

vector < string > X , Y;

main()
{
	int t;
	
	scanf("%d" , &t);
	
	
	while( t -- )
	{
		X.clear();
		Y.clear();
		
		int sx = 0 , sy = 0;
		cin >> x >> y;
		
		if(x[0] == '-')sx = 1;
		if(y[0] == '-')sy = 1;
		
		for(int i = sx ; x[i] ; i ++)
		{
			if(x[i] == '0')continue;
			string tmp = "";
			if(sx)tmp += '-';
			tmp += x[i];
			for(int j = i+1 ; x[j] ; j ++ )tmp += "0";
			X.push_back(tmp);
		}
		
		for(int i = sy ; y[i] ; i ++)
		{
			if(y[i] == '0')continue;
			string tmp = "";
			if(sy)tmp += '-';
			tmp += y[i];
			for(int j = i+1 ; y[j] ; j ++ )tmp += "0";
			Y.push_back(tmp);
		}
		
		//for(int i = 0 ;  i < X.size() ; i ++)cout << X[i] << " ";cout << endl;
		//for(int i = 0 ; i < Y.size() ; i ++)cout << Y[i] << " ";cout << endl;
		
		for(int i = 0 ; i < X.size() ; i ++)
		{
			for(int j = 0 ; j < Y.size() ; j ++)
			{
				cout << X[i] << " x " << Y[j];
				if(j < Y.size()-1)cout << " + ";
			}
			
			if(i < X.size()-1)cout << " + ";
		}cout << endl;
		
	}
}