import heapq

def patience_sort(arr):

    piles = []

    for x in arr:

        placed = False

        for pile in piles:
            if x <= pile[-1]:
                pile.append(x)
                placed = True
                break

        if not placed:
            piles.append([x])

    heap = []

    for i, pile in enumerate(piles):
        heapq.heappush(heap, (pile.pop(), i))

    result = []

    while heap:

        value, i = heapq.heappop(heap)
        result.append(value)

        if piles[i]:
            heapq.heappush(heap, (piles[i].pop(), i))

    return result

arr = [9, 4, 6, 2, 8, 1]

print(patience_sort(arr))
