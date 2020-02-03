# cook your dish here
import math
t=int(input())
for q in range(t):
    n=int(input())
    s=""
    if n%2==1:
        s+="7"
        n-=3
    s+="1"*math.floor(n/2)
    print(s)