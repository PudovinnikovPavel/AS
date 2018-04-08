def is_prime(y):
  if y > 1000:
    print("Ошибка!")
    exit(0)
  if y < 0:
    print("Ошибка!")
    exit(0)
  for i in range(2, 9):
    j = 0
    if y % i == 0:
      j += 1
      break
  if j > 0:
    return False
  else:
    return True
x=int(input("Введите число : "))
is_prime(x)
