#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
#define pf printf
#define sf scanf

int main()
{
    long long n;
    while(sf("%lld", &n)==1)
    if(n%2==0)
    {
        n= (n/2);
        pf("%lld\n", n);
    }
    else
    {
        n = ((n+1)/2)*(-1);
        pf("%lld\n", n);
    }
}