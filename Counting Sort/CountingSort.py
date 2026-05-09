def counting_sort(arr):
    max_value = max(arr)
    count = [0] * (max_value + 1)
    output = [0] * len(arr)

    for num in arr:
        count[num] += 1

    for i in range(1, len(count)):
        count[i] += count[i - 1]

    for i in range(len(arr) - 1, -1, -1):
        output[count[arr[i]] - 1] = arr[i]
        count[arr[i]] -= 1

    for i in range(len(arr)):
        arr[i] = output[i]

arr = [4, 2, 2, 8, 3, 3, 1]
counting_sort(arr)

print(arr)
