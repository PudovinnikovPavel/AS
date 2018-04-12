def myisempty():
    global L
    res = False
    if len(L) == 0:
        res = True
    return res
def mypush(a):
    global L
    return (L.append(a))
def mypop():
    global L
    return (L.pop())
def mysize():
    global L
    return(len(L))
L = ['1','2','3']
print(myisempty(),"\n")
mypush(8)
print(L,"\n")
print(mypop(),"\n")
print(L,"\n")
print(mysize(),"\n")
    
        
        
        
        


    