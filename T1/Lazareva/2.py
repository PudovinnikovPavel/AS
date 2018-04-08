N = int (input("Количество элементов в списке:  "))
list1 = [1] * N
for i in range(N):
	list1[i] = int(input("Элемент:"))
print(list1)
print("Максимальный элемент списка: : ",max(list1))
A = int (input("Количество элементов в списке: "))
list2 = [1] * A
for i in range(A):
	list2[i] = int(input("Элемент:"))
print(list2)
print("Максимальный элемент списка:: ",max(list2))
list1 = [i/max(list1) for i in list1]
print(list1)
list2 = [i/max(list2) for i in list2]
print(list2)
