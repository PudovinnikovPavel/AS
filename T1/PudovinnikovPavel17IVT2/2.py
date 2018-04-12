l = []
flag = 0
print("Введите длину списка")
n = int(input())
print("Введите элементы списка")
for i in range(n):
    l.append(float(input()))
for i in range(n):
    for j in range(i+1,n):
        if l[i] == l[j]:
            flag = 1
if flag == 1:
    print("Элементы не уникальны")
else:
    print("Элементы уникальны")
l.clear()

