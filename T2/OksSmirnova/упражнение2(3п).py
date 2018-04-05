a=[]
b=[]
k=1
n=int(input("Введите количество элементов списка:"))
for i in range(n):
    new = int(input("Введите %i элемент списка" %i))
    a.append(new)
for i in range(n):
    if a[i] > 0:
        b.append(a[i])
j=0
for i in b:
    j += 1
if j>=1:
    k*=b[0]
    if j>=3:
        k*=b[2]
        if j>=6:
            k*=b[5]
        else:
            print("В списке меньше шести положительных элементов")
else:
    print("В списке нет положительных элементов")
print("Произведение первого,третьего,шестого положительного числа равно: %i" %k)
