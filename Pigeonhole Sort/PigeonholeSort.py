def pigeonhole_sort(arr):

    minimum = min(arr)
    maximum = max(arr)

    size = maximum - minimum + 1

    holes = [0] * size

    for num in arr:
        holes[num - minimum] += 1

    index = 0

    for i in range(size):

        while holes[i] > 0:
            arr[index] = i + minimum
            index += 1
            holes[i] -= 1

arr = [8, 3, 2, 7, 4, 6, 8]

pigeonhole_sort(arr)

print(arr)
