for _ in range(int(input())):
    # enter number of elements in an array
    n=int(input())
    # enter the array
    l=list(map(int,input().split()))
    y=[]
    for i in range(1,1<<n):
        x=[]
        for j in range(0,n):
            if((1<<j)&i):
                x.append(l[j])
        y.append(x)
    for i in y:
        i.sort()
    y.sort()
    for i in y:
        print(' '.join(map(str,i)))
    print()