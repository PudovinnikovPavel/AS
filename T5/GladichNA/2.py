#!/usr/bin/python

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

a = radixSort([999,382,1,0,34,8,287,123,555,1,32,987,456,100])
print(a)