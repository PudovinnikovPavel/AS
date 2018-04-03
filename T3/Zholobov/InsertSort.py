import random
import time

def insertSort(arr):
    for i in range (1,len(arr)):
        if (i%1000==0):
            print (i)
        key=arr[i]
        j=i-1
        while(j>=0) and (key<arr[j]):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key
arr=[]
for i in range (50000):
    arr.append(random.randint(0,100))
start_time = time.time()
insertSort(arr)
finish_time = time.time()
print ("time is:"),
print (finish_time-start_time)