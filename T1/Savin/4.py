L = int( input("Enter a number:")) #Введите число
S = list(str(L))                   #Список L

S.reverse()                        #Разворачивает список

for Y in S:
    print(Y, end="")               #Вывести значение