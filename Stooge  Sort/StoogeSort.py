def stooge_sort(arr, low, high):

    if arr[low] > arr[high]:
        arr[low], arr[high] = arr[high], arr[low]

    if high - low + 1 > 2:

        t = (high - low + 1) // 3

        stooge_sort(arr, low, high - t)
        stooge_sort(arr, low + t, high)
        stooge_sort(arr, low, high - t)

arr = [2, 4, 5, 3, 1]

stooge_sort(arr, 0, len(arr) - 1)

print(arr)
