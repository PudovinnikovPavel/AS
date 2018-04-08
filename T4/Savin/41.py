import timeit
import random
import math
x = int(input("Введите количество элементов"))
start_time = timeit.default_timer()
y = []
z = []
for i in range(x):
    new = random.randint(1,20)
    y.append(new)
maxV = max(y)
minV = min(y)
size = 4
count = math.floor((maxV - minV) / size) + 1
b = []
for i in range(count):
    b.append([])
for i in range(x):
    b[math.floor((y[i] - minV) / size)].append(y[i])
for i in range(count):
    b[i] = sorted(b[i])
for i in range(count):
    for j in range(len(b[i])):
        z.append(b[i][j])
elapsed = timeit.default_timer() - start_time
print(elapsed)