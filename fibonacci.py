n = int(input())
odd =0
even = 0
count = 0
list1 =[]
a,b=0,1
if n>=5 or n<=20:
    while count<n:
        print(a)
        temp = a+b
        a=b
        b=temp
        count=count+1
        list1.append(a)
    for i in list:
        if not i%2:
            even=even+1
        else:
            odd=odd+1
else:
    print("INVALID INPUT")
print(odd)
print(even)

