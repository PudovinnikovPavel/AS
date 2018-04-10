def arifmetic(x, y, z):
  if z == '+':
    r = x + y
  elif z == '-':
    r = x - y
  elif z == '*':
    r = y * x
  elif z == '/':
    r = x / y
  else:
    print("Неизвестная операция")
  return r
a = int(input("Введите число"))
b = int(input("Введите число"))
c = input("Введите операцию над числами")
arifmetic(a, b, c)
