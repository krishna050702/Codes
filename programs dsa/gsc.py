import math
n = int(input())
for i in range(n):
    A = int(input())
    lis = list(map(int,input().split()))[:A]
    pis = []
    j =0
    for i in range(0,len(lis)):
        j = math.gcd(j,lis[i])
        pis.append(j)
    if pis==lis:
        print(*pis)
    else:
        print(-1)