t=int(input())
for q in range(t):
    n=int(input())
    s=input()
    c=0
    while "AP" in s:
        s=s.replace("AP","AA")
        c+=1 
    print(c)