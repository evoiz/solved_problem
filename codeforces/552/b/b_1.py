import math
a =int(input())
nn=int(a)
m = int(0)
while nn > 0:
    nn =int (nn) / 10
    m = m + int(1)
nine1 =int( (int(math.pow(10, m-1)) / 10) - 1)
nine2 = int (0)
while nine1 > 0:
    nine2 = nine2 + int(nine1)
    nine1 = int(nine1) / 10
ru=int((a * (m-1)) - nine2)
print(ru)
