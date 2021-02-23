s = int(input())
s+=1
z = set(list(str(s)))
if len(z) == len(str(s)):
    print(s)
else:
    while len(z)!=len(str(s)):
        s+=1
        z = set(list(str(s)))
    print(s)