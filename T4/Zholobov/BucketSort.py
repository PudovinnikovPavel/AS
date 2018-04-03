import random
import time
def bucketSort (arr):
    b = [[] * 1 for i in range(1000)]
    for i in range (len(arr)):
        b[arr[i]//100].append(arr[i])
    for i in range (1000):
        b[i]=sorted(b[i])
    index=0
    for i in range (1000):
        for j in range (len(b[i])):
            arr[index]=b[i][j]
            index+=1
arr=[]
for i in range (1000000):
    arr.append(random.randint(0,10000))
start_time = time.time()
bucketSort(arr)
finish_time = time.time()
print ("time is:")
print (finish_time-start_time)