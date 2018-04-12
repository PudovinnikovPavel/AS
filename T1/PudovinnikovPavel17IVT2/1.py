print("Введите диаметр")
r = float(input())
print("Введите высоту")
h = float(input())
print("Введите площадь покрски одной банкой")
s = float(input())
res = 0
r = r/2
sp = 2*3.1415926536*r*(2*h + r)
res = sp//s
if (sp%s) != 0:
    res = res + 1
print("Нужно %d банок"%res)
