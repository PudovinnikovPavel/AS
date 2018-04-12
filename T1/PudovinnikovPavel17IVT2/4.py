print("Введите число: ")
a = int(input())
print("Обратное число: ")
i = 1
b = a
while b != 0:
    i = i * 10
    b = b // 10
while a != 0:
    i = i // 10
    b += (a % 10) * i
    a = a // 10
print ("%d"%b)