import math

def T(n):
    "Return sum_{i=1}^n d(i), where d(i) is the number of divisors of i."
    f = int(math.floor(math.sqrt(n)))
    return 2 * sum(n // x for x in range(1, f+1)) - f**2

def count_divisors(a, b):
    "Return sum_{i=a}^b d(i), where d(i) is the number of divisors of i."
    return T(b) - T(a-1)
while (1):
     a,b=map(int,raw_input().split())
     if a==0 and b==0 :
          break
    
     ans=count_divisors(a, b)
     print(ans)