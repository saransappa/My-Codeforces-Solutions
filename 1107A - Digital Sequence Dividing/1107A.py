import math
t=int(input())
for q in range(t):
    s=int(input())
    n=input()
    p=n[0]
    q=n[1:len(n)]
    if p!="" and q!="" and int(p)<int(q):
        print("YES")
        print("2")
        print(p+" "+q)
    else:
        print("NO")