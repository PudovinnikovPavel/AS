def arithmetic(a,b,c):
    if (c=='+') | (c=='-') | (c=='/') | (c=='*'):
        case={
            '+': a+b,'-': a-b,'*': a*b,'/': a/b,
        }
        print(case[c])
    else:
        print("Unknown operation")
a = int(input("Enter firs num"))
b = int(input("Enter second num"))
c = input("Choose operation: +,-,/,*")
arithmetic(a,b,c)     
        
