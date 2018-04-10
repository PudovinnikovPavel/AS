
# coding: utf-8

# In[12]:


#shipunov
#sorting by counting
def count(arr):
    counts = [0 for i in range(max(arr)+1)]
    
    for el in arr:
        counts[el] +=1
    for ind in range(1,len(counts)):
        counts[ind] = counts [ind - 1] + counts[ind]
    L = [0 for loop in range(len(arr)+1)]
    
    for el in arr:
        ind = counts[el]-1
        L[ind] = el
        counts[el]-=1
    return L


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

count (arr)


elapsed = timeit.default_timer() - start_time
print (elapsed)

