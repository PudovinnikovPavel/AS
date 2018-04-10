#стек
n = []
def size():
    c = 0
    for i in range(len(n)):
        c = c + 1
    return c
def isEmpty():
    global n
    if(size() == 0):
        return 1
    else:
        return 0
def push(new):
    global n
    n.append(new)
def top():
    global n 
    return n[size()-1]
def pop():
    global n
    del n[size()-1]

k = int(input("Введите количество элементов"))

for i in range(k):
    new = int(input("Введите %i элемент" % i))
    push(new)
while (isEmpty() == 0):
    print(top())
    pop()
