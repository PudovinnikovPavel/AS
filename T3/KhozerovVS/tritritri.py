def sortinsert(arr):
    
    for i in range (1, len(arr)):
        key = arr[i] 
        j=i-1
        while j >= 0 and key<arr[j] :
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

        


            
            
        
    
#BEGIN________   
import math
print ("We need 10^N elements. Enter N: ")    
N = input()
N = int(math.pow(10, int(N)))

#Creation_Random_Array___    
import random
arr = [int(random.random()*1000000) for i in range(1, N)]
    

import timeit

start_time = timeit.default_timer()
sortinsert(arr)
elapsed = timeit.default_timer() - start_time
print (elapsed)


