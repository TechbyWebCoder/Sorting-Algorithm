def flash_sort(arr):

    n = len(arr)

    if n <= 1:
        return

    minimum = min(arr)
    maximum = max(arr)

    if minimum == maximum:
        return

    # Final insertion sort phase
    for i in range(1, n):

        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

arr = [30, 20, 10, 50, 40]

flash_sort(arr)

print(arr)
