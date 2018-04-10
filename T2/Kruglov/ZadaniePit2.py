

def arithmetic(a, b, oper):
    if operation == '+':
        return a + b
    elif operation == '-':
        return a - b
    elif operation == '*':
        return a * b
    elif operation == '/':
        return float(a) / float(b)
    else:
        return "Neizvesnaya operacia"

print "a="
a = int(input())

print "b="
b = int(input())

print "Vichit", arithmetic(a, b, '-')
print "Dekenie", arithmetic(a, b, '/')
print "Slogen", arithmetic(a, b, '+')
print "Umnog", arithmetic(a, b, '*')
print "Neizvesnaya operacia", arithmetic(a, b, '%')
