#username - topcoder-01

queue=[] #global queue

def addq(val):
    queue.append(val)
    print('Value',val,'added to queue')

def delq():
    if len(queue)==0:
        print('Underflow...Queue is empty')
    else:
        print('Value removed=',queue.pop(0))

def display():
    if len(queue)==0:
        print('Underflow...Queue is empty')
        return
                    #[10,20,30]
    #range() gives list = [0,1,2]
    for i in range(0,len(queue),1):
        print(queue[i])
    

while True:
    
    print("--------------QUEUE OPERATIONS----------------")

    print("1. ADD")
    print("2. DELETE")
    print("3. DISPLAY")
    print("4. EXIT")
    ch=int(input("Enter your choice:"))
    if ch==1:
        val=int(input("Enter the value to be added to stack::"))
        addq(val)
    elif ch==2:
        delq()
    elif ch==3:
        display()
    elif ch==4:
        break
print("bye bye......")
