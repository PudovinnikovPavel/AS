def max(a):
    max = a[0]
    for i in range(1,len(a)):
        if a[i] > max :
            max = a[i]
    return max
n = int(input("enter n:"))
t = 0
a = []
for i in range(n):
    a.append(int(input()))
    if a[i]>0:
        t = t + 1
    if t == 1 :
        s = a[i]
    if t == 3 and a[i]>0 :
        s = s*a[i]
    if t == 6 and a[i]>0 :
        s = s*a[i]
if t>=6:
    print("s=", s)
else:
    print("pologitelnih chisel menshe 6")
