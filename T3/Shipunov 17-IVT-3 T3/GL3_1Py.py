
# coding: utf-8

# In[7]:


#task №3
#sortbuble
#
#17-IVT-3
#Shipunov 
#
#SortBubble_________

def sb(arr):
    for i in range(len(arr)-1,0,-1):
        for j in range(i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j] 
    


    
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

sb (arr)

elapsed = timeit.default_timer() - start_time
print (elapsed)


