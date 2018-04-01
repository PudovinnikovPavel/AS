#!/usr/bin/python

arr = [-1,2,-3,4,-5,6,-7,8,-9,10,-11,12]
i = 0
mul = 1
for item in arr:
    if item > 0:
        i = i + 1
        if i == 1 or i == 3 or i == 6:
            mul = mul * item
if i >= 6:
    print "Multiple is: ", mul
else:
    print "List is too small"