class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class linklist:
    def __init__(self):
        self.head = None

    def putting(self, da, da2):
        ################################ always cheak if the node exists or not###########################################
        # if da.next is None:
        #     print("no such nodes")
        #     return

        # var = Node(da2)
        # var.next = da.next
        # da.next = var

        try:
            t = self.head
            while t.data != da:
                t = t.next
            var = Node(da2)
            var.next = t.next
            t.next = var
        except AttributeError:
            print("no such node in the link list")

    def printlist(self):
        t = self.head
        while t:
            print(str(t.data), end=" ")

            t = t.next
        print("\n")

    def count_nodes(self):
        count = 0
        t = self.head
        while t:
            count += 1
            t = t.next
        print("Total number of nodes in link list is = {}".format(count))


llist = linklist()
llist.head = Node(1)
second = Node(2)
third = Node(3)

llist.head.next = second
second.next = third

llist.printlist()
llist.count_nodes()

llist.putting(2, 4)
llist.printlist()
llist.count_nodes()
