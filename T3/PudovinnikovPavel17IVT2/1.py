import timeit
import random
st = timeit.default_timer()
arr = []
n = int(input('Введите количество элементов: '))
for i in range(n):
    arr.append(random.randint(1,1000))
for i in range(n):
    j = 0
    for j in range(n-i-1):
        if arr[j] > arr[j+1]:
            (arr[j+1],arr[j])=(arr[j],arr[j+1])
for i in range(n):
    print(arr[i])
et = timeit.default_timer() - st
print("Время выполнения: ", et)
#10 - 2.249273498653679
#10^2 - 3.29193793695174
#10^3 - 4.075557217909449
#10^4 - 25.317011934455365
    
        
        
        
        
        


    