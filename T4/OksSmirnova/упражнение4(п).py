import timeit 
import random 
import math 
n = int(input("Enter N: ")) 
start_time = timeit.default_timer() 
a = [] 
c = [] 
for i in range(n): 
    new = random.randint(1,20) 
a.append(new) 
maxV = max(a) 
minV = min(a) 
size = 4 
count = math.floor((maxV - minV) / size) + 1 
b = [] 
for i in range(count): 
	b.append([]) 
for i in range(n): 
	b[math.floor((a[i] - minV) / size)].append(a[i]) 
for i in range(count): 
	b[i] = sorted(b[i]) 
for i in range(count): 
	for j in range(len(b[i])): 
		c.append(b[i][j]) 
elapsed = timeit.default_timer() - start_time 
print(elapsed)
