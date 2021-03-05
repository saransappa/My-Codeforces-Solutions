def balanced(s):
    stack = []
    for i in s:
        if i=='(':
            stack.append(i)
        elif i==')':
            if len(stack)>0:
                stack.pop()
            else:
                return False
        else:
            print('error occurred')
    if len(stack)==0:
        return True
    else:
        return False 
 
def check(s):
    k = s
    k = k.replace('A','(')
    k = k.replace('B','(')
    k = k.replace('C',')')
    if balanced(k) :
        return 'YES'
    k = s
    k = k.replace('A','(')
    k = k.replace('B',')')
    k = k.replace('C','(')
    if balanced(k) :
        return 'YES'
    k = s
    k = k.replace('A',')')
    k = k.replace('B','(')
    k = k.replace('C','(')
    if balanced(k) :
        return 'YES'
    k = s
    k = k.replace('A','(')
    k = k.replace('B',')')
    k = k.replace('C',')')
    if balanced(k) :
        return 'YES'
    k = s
    k = k.replace('A',')')
    k = k.replace('B',')')
    k = k.replace('C','(')
    if balanced(k) :
        return 'YES'
    k = s
    k = k.replace('A',')')
    k = k.replace('B','(')
    k = k.replace('C',')')
    if balanced(k) :
        return 'YES'
    else:
        return 'NO'
 
t = int(input())
for _ in range(t):
    s = input()
    print(check(s))