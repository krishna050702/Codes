n = int(input())
for i in range(n):
    A = int(input())
    S = input()
    lis1 = list(S.split('B'))
    lis2 = list(S.split('W'))
    count = 0
    sount = 0
    for i in range(len(lis1)):
        if lis1[i]!='':
            count = count + 1
    for i in range(len(lis2)):
        if lis2[i]!='':
            sount= sount+1
    if count<=sount:
        print(count)
    else:
        print(sount)