z = input()
z = z.split()
l = int(z[0])
r = int(z[1])
found = False
for i in range(l,r+1):
    s = str(i)
    f= 0
    sum = 0
    for j in s:
        if s.count(j)>1:
            f= 1
            break
        else:
            sum+=1
    if f==1:
        continue
    elif sum==len(s) and f==0:
        print(i)
        found = True
        break
if not found:
    print(-1)