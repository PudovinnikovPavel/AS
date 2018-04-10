import random
import time


def radixSort(xList):
    Radix = 10
    maxLength = False
    tmp, placement = -1, 1

    while not maxLength:
        maxLength = True
        buckets = [list() for _ in range(Radix)]
        for k in xList:
            tmp = k // placement
            buckets[tmp % Radix].append(k)
            if maxLength and tmp > 0:
                maxLength = False
        x = 0
        for b in range(Radix):
            buck = buckets[b]
            for k in buck:
                xList[x] = k
                x += 1
        placement *= Radix
    return xList


def test(size):
    arr = []
    for k in range(size):
        arr.append(random.randint(1, size))

    start_time = time.time()
    print "Sorted array sizeof", size
    radixSort(arr);
    print("--- %s seconds ---" % (time.time() - start_time))


test(10000000)