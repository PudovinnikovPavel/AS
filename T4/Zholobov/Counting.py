import random
import time
def counting(data):
    counts=[0 for i in range(max(data)+1)]
    for el in data:
        counts[el]+=1
    for index in range(1,len(counts)):
        counts[index]=counts[index-1]+counts[index]
    L=[0 for loop in range(len(data))]
    for el in data:
        index=counts[el]-1
        L[index]=el
        counts[el]-=1
    return L
arr=[]
for i in range (1000000):
    arr.append(random.randint(0, 10))
start_time = time.time()
arr=counting(arr)
finish_time = time.time()
print ("time is:")
print (finish_time-start_time)