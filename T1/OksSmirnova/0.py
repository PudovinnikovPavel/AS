d = input("Диаметр бака: ")
d = int(d)
h = input("Высота бака: ")
h = int(h)
S = input("Площадь окраски одной банкой: ")
S = int(S)

import math


quantity = (4*math.pi*d*h+(2*math.pi*d**2))/S
quantity = int(quantity)+1
print("Количество банок: ", quantity)
