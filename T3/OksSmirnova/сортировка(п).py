import timeit 
import random 
n=int(input('Введите размер массива')) 
A=[] 
start_time = timeit.default_timer() 
for i in range(n): 
c=random.randint(1,5800) 
A.append(b) 
print ("Исходный массив:",A) 

end= len(A) 
temp=0 
k = 1 
while k < end: 
for i in range(end-k): 
if A[i] > A[i+1]: 
temp = A[i] 
A[i] = A[i+1] 
A[i+1]= temp 
k =k+ 1 
elapsed = timeit.default_timer() - start_time 
print ("Отсортированный массив:",A) 
print("Время сортировки:",elapsed)
