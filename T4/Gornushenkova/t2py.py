#GJ
#blockSort
def blSort(arr):  
    a2 = [[] * 1 for i in range(1000)]
    for i in range (len(arr)):
        a2[arr[i]//100].append(arr[i])
    for i in range (1000):
        a2[i]=sorted(a2[i])
    ind=0
    for i in range (1000):
        for j in range (len(a2[i])):
            arr[ind]=a2[i][j]
            ind+=1
import math
print ("We need 10^N elements. Enter N: ")    
N = input()
N = int(math.pow(10, int(N)))

#Creation_Random_Array___    
import random
arr = [int(random.random()*100000) for i in range(1, N)] 

import timeit
start_time = timeit.default_timer()

blSort (arr)


elapsed = timeit.default_timer() - start_time
print (elapsed)
    

