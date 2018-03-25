#!/usr/bin/python

import random
import time

def sort(array):
    i = 1
    while i < len(array):
        j = 0
        while j < len(array) - i:
            if array[j] > array[j+1]:
                t = array[j]
                array[j] = array[j+1]
                array[j+1] = t
            j = j + 1
        i = i + 1
        if i%1000 ==0:
            print "Processed ", i

def test(size):
    arr = []
    for i in range(size):
        arr.append(random.randint(1,size))

    start_time = time.time()
    print "Sorted array sizeof", size
    sort(arr);
    print("--- %s seconds ---" % (time.time() - start_time))

test(10000)