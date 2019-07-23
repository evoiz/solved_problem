import math
a =(input())
nn=int(a)
m = int(len(a))
nine1 =int( (int(math.pow(10, m)) / 10) - 1)
nine2 = int (0)
while nine1 > 0:
    nine2 = nine2 + int(nine1)
    nine1 = int(nine1) / 10
ru=int((int (a) * (m)) - nine2)
print(ru)
