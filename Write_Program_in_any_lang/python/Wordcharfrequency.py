s= input("Enter sentence")
c= input("enter char")
l=[]
z=[]
l=(s.split(" "))
print(l)
for i in l:
    if c in i:
        z.append(i.count(c))
z.sort()
print(z)
for x in z:
    for f in l:
        if(f.count(c)==x):
            print(f)
