from sys import stdin, stdout


def ch(x):
    ans = 0
    while x:
        ans = ans + x % 10
        x = x // 10
    return ans == 10


n = int(stdin.readline().strip())
res = 1
for i in range(19, int(5e7), 9):
    if ch(i):
        if res == n:
            stdout.write(str(i))
            break
        res = res + 1
