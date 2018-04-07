
q=[]

def isEmpty(s):
    if len(s) == 0:
        return True
    else:
        return False

    
def push(s,i):
    return s.append(i)

def pop(s):
    s.pop()
def size(s):
    return len(s)


print(size(q))
push(q,1)
push(q,3)
print(isEmpty(q))
print(size(q))
pop(q)
pop(q)
print(isEmpty(q))

    

