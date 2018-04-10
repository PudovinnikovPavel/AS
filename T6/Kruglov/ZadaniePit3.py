
import timeit 
import random 
start_time=timeit.default_timer() 
z = [int(1000) for i in range(1,100)] 
i = 0


while i < len(z)-1:
    
j = 0 
while j<len(z)-i-1: 
if z[j]>z[j+1]: 
(z[j],z[j+1])=(z[j+1],z[j]) 

j=j+1 
i=i+1 
for i in z: 
print(i, end=" ") 

print("",elapsed)
