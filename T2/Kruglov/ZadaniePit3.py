

arr = [123,5435,-3,-4,-33,23,-343,54,-1,1,-13,144]
i = 0
a = 1
for it in arr:
    if it > 0:
        i = i + 1
        if i == 1 or i == 3 or i == 6:
            a = a * it
if i >= 6:
    print "Rez", a
else:
    print "Spisok malenkiy"
