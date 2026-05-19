class Node:

    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None

def insert(root, value):

    if root is None:
        return Node(value)

    if value < root.data:
        root.left = insert(root.left, value)
    else:
        root.right = insert(root.right, value)

    return root

def inorder(root):

    if root:
        inorder(root.left)
        print(root.data, end=" ")
        inorder(root.right)

arr = [5, 4, 7, 2, 11]

root = None

for num in arr:
    root = insert(root, num)

inorder(root)
