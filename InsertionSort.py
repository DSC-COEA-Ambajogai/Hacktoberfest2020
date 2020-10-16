# Insertion Sort
def insertionSortInPython(MyArray):
    for i in range(1, len(MyArray)):
        CompareVar = MyArray[i]
        j = i - 1
        while j >= 0 and CompareVar < MyArray[j]:
            MyArray[j + 1] = MyArray[j]
            j -= 1
            MyArray[j + 1] = CompareVar


# Function Main
MyArray = ['z', 'm', 'n', 'p', 'e', 'b', 't', 'f', 'w', 'q']
insertionSortInPython(MyArray)
print("The sorted array is:")
for i in range(len(MyArray)):
    print(MyArray[i])