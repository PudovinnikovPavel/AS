
# coding: utf-8

# In[ ]:


def arith(x,y,z):
    if z == "+":
        return x+y
    elif z == "-":
        return x-y
    elif z == "*":
        return x*y
    elif z == "/":
        return x/y
    else:
        return 'ERROR'
    

print("Введите 3 аргумента")
a=int(input())
b=int(input())
c=input()
arith(a,b,c)

