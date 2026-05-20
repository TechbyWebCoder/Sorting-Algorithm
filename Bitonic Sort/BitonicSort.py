def bitonic_merge(arr, low, cnt, direction):

    if cnt > 1:

        k = cnt // 2

        for i in range(low, low + k):

            if direction == (arr[i] > arr[i + k]):
                arr[i], arr[i + k] = arr[i + k], arr[i]

        bitonic_merge(arr, low, k, direction)
        bitonic_merge(arr, low + k, k, direction)

def bitonic_sort(arr, low, cnt, direction):

    if cnt > 1:

        k = cnt // 2

        bitonic_sort(arr, low, k, True)
        bitonic_sort(arr, low + k, k, False)

        bitonic_merge(arr, low, cnt, direction)

arr = [3, 7, 4, 8, 6, 2, 1, 5]

bitonic_sort(arr, 0, len(arr), True)

print(arr)
