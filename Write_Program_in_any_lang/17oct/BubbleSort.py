def bubbleSortInPython(my_list):
    for passnum in range(len(my_list)-1,0,-1):
        for i in range(passnum):
            if my_list[i]>my_list[i+1]:
                temp = my_list[i]
                my_list[i] = my_list[i+1]
                my_list[i+1] = temp

my_list = [14,46,43,27,57,41,45,21,70]
bubbleSortInPython(my_list)
print(my_list)