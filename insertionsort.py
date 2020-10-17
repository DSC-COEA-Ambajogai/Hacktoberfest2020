
arr=list(map(int,input().split()))
for i in range(0,len(arr)):
    j=i
    while j !<0:
        if(arr[j-1]>arr[j]):
            arr[j-1],arr[j]=arr[j],arr[j-1]
        else:
            break
        j=j-1
print(arr)
