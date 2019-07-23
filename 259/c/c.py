from sys import stdin, stdout

n = str(stdin.readline().strip())
ok = True
i = 1
for x in n:
    if ok and i == len(n):
        continue
    if x == '0' and ok:
        ok = False
        continue
    else:
        stdout.write(x)

    i = i + 1
