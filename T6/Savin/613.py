x = []
def size():
    z = 0
    for k in range(len(x)):
        z = z + 1
    return z
def isEmpty():
    global x
    if(size() == 0):
        return 1
    else:
        return 0
def push(new):
    global x
    x.append(new)
def top():
    global x
    return x[size()-1]
def pop():
    global x
    del x[size()-1]
y = int(input("Введите количество элементов"))
for k in range(y):
    new = int(input("Введите %i элемент" % k))
    push(new)
print(size())
while (isEmpty() == 0):
    print(top())
    pop()