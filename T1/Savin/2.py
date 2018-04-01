Number1 = input ("Enter a number:").split()  #Введите числа
Number2 = set(Number1)                       #Множество Number1
Number3 = len(Number2)                       #Число элементов в множестве Number2
Number4 = len(Number1)                       #Число элементов в множестве Number1

if  \
        Number3 == Number4:              #Если Number3=Number4 то/
    print('A set of unique')             #1)Набор уникален
else:                                    #Иначе
    print('The kit is not unique')       #2)Набор не уникален
