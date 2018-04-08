import timeit
li = list(range(1,1000001))
import random as ran
start_time = timeit.default_timer()
ran.shuffle(li)
n = 1 
while n < len(li):
     for i in range(len(li)-n):
          if li[i] > li[i+1]:
               li[i],li[i+1] = li[i+1],li[i]
     n += 1
elapsed = timeit.default_timer() - start_time
print(li)
print(elapsed)

