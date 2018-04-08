N = int (input("Количество элементов в списке: "))
x = [1] * N
for i in range(N):
	x[i] = int(input("Элемент:"))
print(x)
a = 1 
y=len(x)
while a < y:
     for i in range(y-1):
          if x[i] > x[i+1]:
               x[i],x[i+1] = x[i+1],x[i]
     a += 1
print("Отсортированный список: ",x)
