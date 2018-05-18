import math
a,b,c=input().split(" ")
a=int(a)
b=int(b)
c=int(c)

def mod(a,b,c):
    if b==0:
        return 1
    elif b%2==0:
        y=mod(a,b/2,c)
        return (y*y)%c
    else:
        return ((a%c)*mod(a,b-1,c))%c

ans=mod(a,b,c)
print(ans)