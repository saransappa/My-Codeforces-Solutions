t=int(input())
for q in range(t):
    z=input()
    z=z.split(" ")
    A=int(z[0])
    B=z[1]
    C=""
    for i in range(len(B)):
        C+="9"
    mult = len(B)-1
    if B==C:
        mult = len(B)
    count=A*(mult)
    print(count)