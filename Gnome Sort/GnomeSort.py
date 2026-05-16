def gnome_sort(arr):
    index = 0
    n = len(arr)

    while index < n:

        if index == 0:
            index += 1

        if arr[index] >= arr[index - 1]:
            index += 1
        else:
            arr[index], arr[index - 1] = arr[index - 1], arr[index]
            index -= 1

arr = [34, 2, 10, -9]
gnome_sort(arr)

print(arr)
