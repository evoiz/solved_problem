t = int(input())
ans = int(0)
for i in range(t):
    a = []
    length = int(0)
    a = map(str, (input().split('.')))
    b = list(a)
    for x in b:
        length = length + 1
    if length != 2:
        continue
    elif (len(b[0]) + len(b[1]) + 1) > 20:
        continue
    elif len(b[0]) > 8 or len(b[1]) > 3 or len(b[0])==0 or len(b[1])==0:
        continue
    else:
        ans = ans + 1
print(ans)
