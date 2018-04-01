#Proram №2 (Python)
def arithmetic(x,y,z):
    if z == '+':
        return x+y
    elif z == '-':
        return x-y
    elif z == '*':
        return x*y
    elif z == '/':
        return x/y
    else: 
        print("ERROR!")

x = int(input())

y = int(input())

z = input()

j = arithmetic(x,y,z)

print(j)

