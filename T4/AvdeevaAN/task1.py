#!/usr/bin/python

import random
import time

def bucketSort(arr, n):
    b = [list() for _ in range(n)]
    for i in range(n):
        bi = int(n * arr[i])
        b[bi].append(arr[i])
    for i in range(n):
        b[i].sort()
    idx = 0
    for i in range(n):
        bucket = b[i]
        for j in bucket:
            arr[idx]=j
            idx += 1

def test(size):
    arr = []
    for i in range(size):
        arr.append(random.uniform(0,1.0))

    start_time = time.time()
    print "Sorted array sizeof", size
    bucketSort(arr, size);
    print("--- %s seconds ---" % (time.time() - start_time))
    print(arr)

test(10)
