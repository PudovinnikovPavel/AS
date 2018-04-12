import timeit
import random
st = timeit.default_timer()
arr = []
n = int(input('Введите количество элементов: '))
for i in range(n):
    arr.append(random.randint(1,1000))
b = [[] for i in range(n)]
for i in range(n):
    b[arr[i]//100].append(arr[i])
for i in range(n):
    b[i] = sorted(b[i])
k = 0
for i in range(n):
    for j in range(len(b[i])):
        arr[k] = b[i][j]
        k = k + 1 
for i in range(n):
    print(arr[i])
et = timeit.default_timer() - st
print("Время выполнения: ", et)
#10 - 1.8481191807131836
#10^2 - 2.252296994612607
#10^3 - 5.307969741326815
#10^4 - 6.067475429379556
#10^5 - 188.1723503180865
    
        
        
        
        
        


    