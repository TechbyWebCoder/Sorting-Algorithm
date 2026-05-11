def bucket_sort(arr):
    n = len(arr)

    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = [0.42, 0.32, 0.23, 0.52, 0.25, 0.47]
bucket_sort(arr)

print(arr)
