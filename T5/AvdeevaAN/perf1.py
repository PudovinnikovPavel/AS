#!/usr/bin/python

import random
import time

def radixSort(aList):
    Radix = 10
    maxLength = False
    tmp, placement = -1, 1
    
    while not maxLength:
        maxLength = True
        buckets = [list() for _ in range(Radix)]
        for i in aList:
            tmp = i // placement
            buckets[tmp % Radix].append(i)
            if maxLength and tmp > 0:
                maxLength = False
        a = 0
        for b in range(Radix):
            buck = buckets[b]
            for i in buck:
                aList[a] = i
                a += 1
        placement *= Radix
    return aList

def test(size):
    arr = []
    for i in range(size):
        arr.append(random.randint(1,size))

    start_time = time.time()
    print "Sorted array sizeof", size
    radixSort(arr);
    print("--- %s seconds ---" % (time.time() - start_time))

test(10000000)
