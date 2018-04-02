#!/usr/bin/python

import random
import time

def countingSort(data):
    counts = [0 for i in range(max(data)+1)]
    for el in data:
        counts[el] += 1
    for index in range(1, len(counts)):
        counts[index] = counts[index-1] + counts[index]
    L=[0 for loop in range(len(data)+1)]
    for el in data:
        index = counts[el] - 1
        L[index] = el
        counts[el] -= 1
    return L

def test(size):
    arr = []
    for i in range(size):
        arr.append(random.randint(1,size))

    start_time = time.time()
    print "Sorted array sizeof", size
    a=countingSort(arr);
    print("--- %s seconds ---" % (time.time() - start_time))
    print(a)

test(10)
