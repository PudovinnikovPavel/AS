a1=input("Введите целое число")
a1=int(a1)
a2=0

while a1>0:
    digit = a1%10;
    a1 = a1//10;
    a2=a2*10
    a2=a2+digit
    
print("Обратное число:",a2)

