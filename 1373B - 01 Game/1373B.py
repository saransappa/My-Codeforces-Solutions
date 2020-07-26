t = int(input())
for i in range(t):
    s = input()
    k = 0
    while '01' in s or '10' in s:
        if '01' in s:
            z = s.find('01')
            s = s[:z] + s[z+2:]
            k += 1
        elif '10' in s:
            z = s.find('10')
            s = s[:z] + s[z+2:]
            k += 1
        else:
            break 
    if k%2==0:
        print('NET')
    else:
        print('DA')