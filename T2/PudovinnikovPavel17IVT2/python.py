def is_prime(a):
    res = True
    if (a <= 1):
        res = False
    else:
        for i in range(2, int(a*0.5)):
            if (a % i == 0):
                res = False
    return (res)

def arithmetic (a,b,z):
    c = 0
    if z == "+":
        c = a + b
    elif z == "-":
        c = a - b
    elif z == "*":
        c = a * b
    elif z == "/":
        c = a / b
    else:
        print ("Неизвестная операция")
    return (c)

print ("Задание 1\nВведите целое число от 0 до 1000 ")
a = int (input())
print (is_prime(a),"\n")

print ("Задание 2\nВведите 2 целых числа и операцию\nВведите первое число\n")
x = float (input())
print ("Введите второе число\n")
y = float (input())
print ("Введите операцию\n")
z = input ()
print (arithmetic (x,y,z))
print ("Задание 3\nВведите число элементов")
arr = []
n = int (input())
for i in range(n):
    print ("\nВведите ", i+1," элемент: ")
    arr.append(int (input()))
j = 0
for i in range(n):
    if arr[i] > 0:
        j = j + 1
        if j == 1:
            res = arr[i]
        elif(j == 3)or(j == 6):
            res = res * arr[i]
            if j == 6:
                break
if j < 6:
    print("В списке недостаточно положительных чисел")
else:
    print("Произведение равно ",res)
        
        
        
        
        


    