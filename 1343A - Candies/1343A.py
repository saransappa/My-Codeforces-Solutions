t= int(input())
for l in range(t):
    n = int(input())
    for i in range(2,1000):
        k = 2**i -1
        if n%k==0:
            print(n//k)
            break 