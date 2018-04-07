
# coding: utf-8

# In[7]:


#17ivt3
#Shipunov
#T5
def RaS( ma ):
    r=10
    m= False
    tmp =-1
    tt = 1
    
    while not m:
        m=True
        qq = [list() for _ in range ( r )]
        for i in ma:
            tmp=i//tt
            qq[tmp % r].append( i )
            if m and tmp>0:
                m= False
        a=0
        for b in range ( r ):
            yy = qq[b]
            for i in yy:
                ma[a]= i
                a+=1
        tt*=r
    return ma

import math
print ("We need 10^N elements. Enter N: ")    
N = input()
N = int(math.pow(10, int(N)))

#Creation_Random_Array___    
import random
arr = [int(random.random()*10000) for i in range(1, N)]

import timeit
start_time = timeit.default_timer()

RaS (arr)


elapsed = timeit.default_timer() - start_time
print (elapsed)
for i in range(len(arr)):
    print(arr[i])  
    

