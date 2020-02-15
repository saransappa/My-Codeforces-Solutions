z=input()
z=z.split(" ")
n=int(z[0])
m=int(z[1])
list=[]
for i in range(n):
    list.append(input())

k=""
l=""
same=[]
left=[]
right=[]
for i in range(n):
    p = list[i]
    q = p[::-1]
    #print(p)
    #print(q)
    if p!="-1":
        if p ==q :
            if len(same)==0:
                same.append(q)
            list[list.index(q)]="-1"
        elif q in list:
            left.append(p)
            right.append(q)
            list[list.index(p)]="-1"
            list[list.index(q)]="-1"
#print(left)
#print(right)
#print(same)
s=""
right = right[::-1]
for i in left:
    s+=i 
for i in same:
    s+=i 
for i in  right:
    s+=i 
print(len(s))
print(s)