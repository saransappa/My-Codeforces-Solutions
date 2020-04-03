t = int(input())
for r in range(t):
    n , x = map(int,input().split())
    k = input()
    k = k.split(" ")
    list = []
    for i in k:
        if i not in list:
            list.append(i)
    list2 = []
    for i in list:
        list2.append(int(i))
    list = list2 
    list.sort()
    i=0
    while x>0:
        i+=1
        if i not in list:
            x-=1
    if i+1 in list:
        print(i+1)
    else:
        print(i)
        
       