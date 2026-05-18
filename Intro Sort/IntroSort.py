import math

def insertion_sort(arr, low, high):

    for i in range(low + 1, high + 1):
        key = arr[i]
        j = i - 1

        while j >= low and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

def partition(arr, low, high):

    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]

    return i + 1

def intro_sort(arr, low, high, depth_limit):

    size = high - low + 1

    if size < 16:
        insertion_sort(arr, low, high)
        return

    if depth_limit == 0:
        return

    pivot = partition(arr, low, high)

    intro_sort(arr, low, pivot - 1, depth_limit - 1)
    intro_sort(arr, pivot + 1, high, depth_limit - 1)

arr = [10, 3, 7, 4, 9, 2, 8, 5]

depth_limit = int(2 * math.log(len(arr)))

intro_sort(arr, 0, len(arr) - 1, depth_limit)

print(arr)
