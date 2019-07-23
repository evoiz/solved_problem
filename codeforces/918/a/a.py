import math
from sys import stdin, stdout

def res(x):
    a = int(math.sqrt(x))
    return bool(a * a == x)


def ch(x):return bool((res(5 * x * x + 4)) or (res(5 * x * x - 4)))


n = int(stdin.readline().strip())
s = str()
for i in range(1, n + 1):
    if ch(i):
        stdout.write('O')
    else:
        stdout.write('o')
