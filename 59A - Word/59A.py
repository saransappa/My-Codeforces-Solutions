s = input()
alpha = 'abcdefghijklmnopqrstuvwxyz'
cap = 0
small = 0
for i in s:
    if i in alpha:
        small+=1
    else:
        cap+=1
if cap>small:
    print(s.upper())
else:
    print(s.lower())