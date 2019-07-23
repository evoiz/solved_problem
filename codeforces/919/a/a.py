n, m = map(int, input().split())
ans = float(1e9)
for i in range(n):
    a, b = map(int, input().split())
    ans = min(ans, a * m / b)
print(round(ans,8))
