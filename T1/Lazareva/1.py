N = int (input("Количество элементов в списке:  "))
list = [1] * N
for i in range(N):
	list[i] = int(input("Элемент:"))
print(list)
listset = set(list)
if len(listset) == len(list):
	print("Каждое число встречается один раз в списке")
else:
	print("В списке есть одинаковые элементы")
