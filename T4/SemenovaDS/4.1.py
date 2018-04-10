import timeit
import random
import math

Mas = int(input("Enter the N=10^3 or N=10^5 or N=10^6"))
start_time = timeit.default_timer()
a = []
c = []
for i in range(Mas):
    rang = random.randint(1,10)
    a.append(rang)
mx = max(a)
mn = min(a)
size = 4
count = math.floor((mx - mn) / size) + 1
b = []
for i in range (count):
    b.append([])
for i in range(Mas):
    b[math.floor((a[i] - mn) / size)].append(a[i])
for i in range(count):
    b[i] = sorted(b[i])   
for i in range(count):
    for j in range(len(b[i])):
        c.append(b[i][j])
elapsed = timeit.default_timer() - start_time
print(elapsed)
