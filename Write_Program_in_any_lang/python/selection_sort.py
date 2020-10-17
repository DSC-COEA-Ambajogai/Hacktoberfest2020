def sel_sort(unsort_lst):
    for i in range(len(unsort_lst) - 1):
        j = i
        for j in range(i, len(unsort_lst)):
            if(unsort_lst[j] < unsort_lst[i]):
                temp = unsort_lst[i]
                unsort_lst[i] = unsort_lst[j]
                unsort_lst[j] = temp


if __name__ == "__main__":
    print("Enter all unsorted element :- ", end = " ")
    unsort_lst = list(map(int,input().split(" ")))
    sel_sort(unsort_lst)
    for i in unsort_lst:
        print(i, end = " ")
