#1.6 sec 10^3 
#59.2 sec 10^5 
#??? sec 10*6 
import timeit 
import random 
start_time=timeit.default_timer() 
z = [int(1000*random.random()) for i in range(1,100000)] 
i = 0 
while i < len(z)-1: 
j = 0 
while j<len(z)-i-1: 
if z[j]>z[j+1]: 
(z[j],z[j+1])=(z[j+1],z[j]) 
#c=z[j] 
#z[j]=z[j+1] 
#z[j+1]=c 
j=j+1 
i=i+1 
for i in z: 
print(i, end=" ") 
elapsed = timeit.default_timer() - start_time 
print("",elapsed)
