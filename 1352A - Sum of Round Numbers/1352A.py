t = int(input())
for p in range(t):
    n = (input())
    list = []
    while n!="":
        list.append(n[0]+'0'*(len(n)-1))
        n = n[1:]
    ans = []
    for i in list:
        if(int(i)!=0):
            ans.append(i)
    print(len(ans))
    for i in ans:
        print(i,end=' ')
    print()