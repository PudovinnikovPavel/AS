from random import random
 
def make_list(n, mn, mx):
    a = []
    for i in range(n):
        b = int(random() * (mx - mn + 1)) + mn
        a.append(b)
    return a
 
def max_div(a):
    b = max(a)
    for i in a:
        print('%.2f ' % (i/b), end='')
    print()
    print('max =', b)
 
print('Вводите количество элементов, минимум и максимум через пробел')
print('(для завершения оставьте пустую строку)')
while 1:
    print()
    data = input()
    if data == '': break
    data = data.split()
    mylist = make_list(int(data[0]), int(data[1]), int(data[2]))
    print(mylist)
    max_div(mylist)
