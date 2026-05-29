def sift(arr, start, size):

    root = start

    while 2 * root + 1 < size:

        child = 2 * root + 1

        if child + 1 < size and arr[child] < arr[child + 1]:
            child += 1

        if arr[root] < arr[child]:
            arr[root], arr[child] = arr[child], arr[root]
            root = child
        else:
            return

def smooth_sort(arr):

    n = len(arr)

    for i in range(n // 2 - 1, -1, -1):
        sift(arr, i, n)

    for i in range(n - 1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0]
        sift(arr, 0, i)

arr = [12, 11, 13, 5, 6, 7]

smooth_sort(arr)

print(arr)
