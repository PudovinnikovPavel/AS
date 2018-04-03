import random
import time
def swap(xp,yp):
    temp=xp
    xp=yp
    yp=temp
def bubbleSort (arr):
    for i in range (len(arr)):
        flag=0
        if (i%100==0):
            print (i)
        for j in range (len(arr)-1):
            if (arr[j]>arr[j+1]):
                swap(arr[j],arr[j+1])
arr=[]
for i in range (50000):
    arr.append(random.randint(0, 100))
start_time = time.time()
bubbleSort(arr)
finish_time = time.time()
print ("time is:"),
print (finish_time-start_time)