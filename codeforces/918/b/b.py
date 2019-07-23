n, m = map(int, input().split())
d = dict(reversed(input().split()) for _ in range(n))
for i in range(m):
    tmp = input()
    print(tmp + ' #' + d[tmp.split()[1][0:len(tmp.split()[1]) -1]] )
