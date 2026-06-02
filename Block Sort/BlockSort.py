def insertion_sort(arr, left, right):

    for i in range(left + 1, right + 1):

        key = arr[i]
        j = i - 1

        while j >= left and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

def block_sort(arr):

    block_size = 4
    n = len(arr)

    for i in range(0, n, block_size):

        right = min(i + block_size - 1, n - 1)

        insertion_sort(arr, i, right)

    for i in range(1, n):

        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

arr = [12, 4, 8, 15, 1, 9, 3, 7]

block_sort(arr)

print(arr)
