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
        for y in range(Radix):
            buck = buckets[y]
            for k in buck:
                aList[x] = k
                x += 1
        placement *= Radix
    return xList


x = radixSort([999, 382, 1, 0, 34, 8, 287, 123, 555, 1, 32, 987, 456, 100])
print(x)