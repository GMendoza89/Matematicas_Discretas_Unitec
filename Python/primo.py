import sys

totalArguments = len(sys.argv)
if totalArguments>=2:
    n = int(sys.argv[1])    
else:
    print("ingrese un valor")
    n = int(input())
primeNumers = []
for m in range(0,n+1):
    if m == 0:
        primeNumers.append(0)
    elif m==1:
        primeNumers.append(1)
    else:
        p = True
        l = 2
        while l<m and p:
            if m%l:
                l = l+1
            else:
                p = False
        if p:
            primeNumers.append(m)
print(primeNumers)
        



