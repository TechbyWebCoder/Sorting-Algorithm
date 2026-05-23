import threading
import time

def sleep_sort(num):
    time.sleep(num * 0.1)
    print(num, end=" ")

arr = [4, 2, 7, 1, 3]

threads = []

for num in arr:
    t = threading.Thread(target=sleep_sort, args=(num,))
    threads.append(t)
    t.start()

for t in threads:
    t.join()
