class Node:
    def __init__(self, value, prev=None, next=None):
        self.value = value
        self.next  = next
        self.prev  = prev # for doubly linked
    def __str__(self):
        return(str(self.value))

# singly linked
Head = Node(1)
A = Node(3)
B = Node(4)
C = Node(7)

Head.next = A
A.next = B
B.next = C
#traverse
curr = Head
while curr:
    print(curr)
    curr = curr.next

# search 
def search(head, target):
    curr = head
    while curr:
        if target = curr.value
        return True
    curr = curr.next
    return False


## Doubly Linked
head = tail = Node(1)
def insert_begining(head, tail, val):
    n = Node(val, next=head)
    head.prev = n
    return head, n