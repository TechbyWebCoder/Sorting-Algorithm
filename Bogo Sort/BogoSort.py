import random

def is_sorted(arr):

    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            return False

    return True

def shuffle(arr):
    random.shuffle(arr)

def bogo_sort(arr):

    while not is_sorted(arr):
        shuffle(arr)

arr = [3, 2, 1]

bogo_sort(arr)

print(arr)
