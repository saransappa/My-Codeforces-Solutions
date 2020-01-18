z=input()
z=z.split(" ")
n=int(z[0])
m=int(z[1])
a=input()
a=a.split(" ")
b=input()
b=b.split(" ")
q=int(input())
for i in range(q):
    n=int(input())
    p=n%len(a)
    q=n%len(b)
    p-=1
    q-=1
    str=a[p]+b[q]
    print(str)