def arithmetic(x,y,z):
    if(z == '*'):
        return(x*y)
    if(z == '/'):
        return(x/y)
    if(z == '+'):
        return(x+y)
    if(z == '-'):
        return(x-y)
    if(z != '*' and z != '/' and z != '+' and z != '-'):
        return "neizvestnaya operazia"
print("enter : a - 1 numb\nb - 2 numb\nc - oper\n")
a = int(input())
b = int(input())
c = input()
print(arithmetic(a,b,c))

