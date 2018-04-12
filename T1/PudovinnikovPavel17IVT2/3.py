l = []
print("Введите количество списков")
k = int(input())
for j in range(k):
    print("Введите длину списка")
    n = int(input())
    print("Введите элементы списка")
    for i in range(n):
        l.append(float(input()))
    max1 = l[1]
    for i in range(n):
        if max1<l[i]:
            max1=l[i]
    for i in range(n):
        l[i]=l[i]/max1
        print("%f, "%l[i])
    l.clear()

