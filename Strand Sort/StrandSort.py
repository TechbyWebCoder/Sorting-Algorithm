def merge(a, b):

    result = []
    i = j = 0

    while i < len(a) and j < len(b):

        if a[i] < b[j]:
            result.append(a[i])
            i += 1
        else:
            result.append(b[j])
            j += 1

    result.extend(a[i:])
    result.extend(b[j:])

    return result

def strand_sort(arr):

    result = []

    while arr:

        sublist = [arr.pop(0)]

        i = 0

        while i < len(arr):

            if arr[i] >= sublist[-1]:
                sublist.append(arr.pop(i))
            else:
                i += 1

        result = merge(result, sublist)

    return result

arr = [10, 5, 30, 40, 2, 4, 9]

sorted_arr = strand_sort(arr)

print(sorted_arr)
