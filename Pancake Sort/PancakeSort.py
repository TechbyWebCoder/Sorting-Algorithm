def flip(arr, i):
    start = 0

    while start < i:
        arr[start], arr[i] = arr[i], arr[start]
        start += 1
        i -= 1

def find_max(arr, n):
    max_index = 0

    for i in range(1, n):
        if arr[i] > arr[max_index]:
            max_index = i

    return max_index

def pancake_sort(arr):

    n = len(arr)

    for curr_size in range(n, 1, -1):

        max_index = find_max(arr, curr_size)

        if max_index != curr_size - 1:

            flip(arr, max_index)

            flip(arr, curr_size - 1)

arr = [23, 10, 20, 11, 12, 6, 7]

pancake_sort(arr)

print(arr)
