def tournament_sort(arr):

    sorted_arr = []

    temp = arr[:]

    while temp:

        minimum = min(temp)

        sorted_arr.append(minimum)

        temp.remove(minimum)

    return sorted_arr

arr = [29, 10, 14, 37, 13]

sorted_arr = tournament_sort(arr)

print(sorted_arr)
