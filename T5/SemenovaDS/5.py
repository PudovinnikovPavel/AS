import random
import time

def radixsort( alist ):
    RADIX=10
    maxLength= False
    tmp , placement = -1, 1
    
    while not maxLength:
        maxLength=True
        buckets = [list() for _ in range ( RADIX )]
        for i in alist:
            tmp=i//placement
            buckets[tmp % RADIX].append( i )
            if maxLength and tmp>0:
                maxLength= False
        a=0
        for b in range ( RADIX ):
            buck = buckets[b]
            for i in buck:
                alist[a]= i
                a+=1
        placement*=RADIX
    return alist
arr=[]
for i in range (10001):
    arr.append(random.randint(0, 1000001))
start_time = time.time()
arr=radixsort(arr)
finish_time = time.time()
print ("time :")
print (finish_time-start_time)
