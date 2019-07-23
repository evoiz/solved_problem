n = int(input())
l = []
st = set()
l = map(int, input().split())
a = list(l)
x = 0
y = 0
a.append(-1)
for i in range(n):
    x = x + 1
    if a[i] == 0:
        y = y + 1
    if (a[i] +a[i + 1])==1:
        st.add(x)
        st.add(y)
        x=0
        y=0
st.add(x)
st.add(y)
st.discard(0)
if len(st) == 1:
    print("YES")
else:
    print("NO")
