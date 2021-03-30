t = int(input())
for _ in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    d = dict()
    for i in l:
        if d.get(i,0)==0:
            d[i]=1
        else:
            d[i]+=1
    s = sorted(list(set(l)))
    ans = []
    p = 0
    while p<len(l):
        for i in s:
            if d[i]>0:
                ans.append(i)
                d[i]-=1
                p+=1
    for i in ans:
        print(i,end=' ')
    print()