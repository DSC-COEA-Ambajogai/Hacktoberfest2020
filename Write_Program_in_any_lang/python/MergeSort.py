def mergesort(a):   #function to perform mergesort
    if len(a)>1: 
        mid=len(a)//2
        L=a[:mid] 
        R=a[mid:] 
        mergesort(L) 
        mergesort(R) 
        i=0
        j=0
        k=0 
        while i<len(L) and j<len(R): 
            if L[i]<R[j]: 
                a[k]=L[i] 
                i+=1
            else: 
                a[k]=R[j] 
                j+=1
            k+=1
        while i<len(L): 
            a[k]=L[i] 
            i+=1
            k+=1
        while j<len(R): 
            a[k]=R[j] 
            j+=1
            k+=1

def print_list(a):   #function to print the list
    for i in range(len(a)):         
        print(a[i], end =" ") 
    print() 


n = int(input("Enter number of elements : ")) 
a=[]
for i in range(0,n):
    num=int(input("Enter a number: "))
    a.append(num)
print ("Given array is", end ="\n")  
print_list(a) 
mergesort(a) 
print("Sorted array is: ", end ="\n") 
print_list(a) 