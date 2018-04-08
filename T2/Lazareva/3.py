x=[]
N=int(input("Введите количество элементов списка\n "))
for i in range(N):
    i +=1
    i= int(input("%i элемент списка: " %i))
    x.append(i)
print(x)
i = 0
z = 1
for a in x:
    if a > 0:
        i = i + 1
        if i == 1:
          z = z*a
          print("Первое положительное число: ", a)
        elif i == 3:
          z = z*a
          print("Третье положительное число: ", a)
        elif i == 6:
          z = z*a
          print("Шестое положительное число: ", a)
if i >= 6:
    print ("Произведение этих чисел: ", z)
else:
    print ("В списке недостаточное количество элементов")
