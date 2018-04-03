a = []
def size():
    c = 0
    for i in range(len(a)):
        c = c + 1
    return c
def isEmpty():
    global a
    if(size() == 0):
        return 1
    else:
        return 0
def push(new):
    global a
    a.append(new)
def top():
    global a 
    return a[size()-1]
def pop():
    global a
    del a[size()-1]
n = int(input("Введите количество элементов"))
for i in range(n):
    new = int(input("Введите %i элемент" % i))
    push(new)
print(size())
while (isEmpty() == 0):
    print(top())
    pop()