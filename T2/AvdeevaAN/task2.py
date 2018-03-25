#!/usr/bin/python

def arithmetic(a, b, operation):
    if operation == '+':
        return a + b
    elif operation == '-':
        return a - b
    elif operation == '*':
        return a * b
    elif operation == '/':
        return float(a) / float(b)
    else:
        return "Unknown operation"

print "Input number a: "
a = int(input())
print "Input number b: "
b = int(input())
print "+ is: ", arithmetic(a, b, '+')
print "- is: ", arithmetic(a, b, '-')
print "* is: ", arithmetic(a, b, '*')
print "/ operation is: ", arithmetic(a, b, '/')
print "Unknown operation is: ", arithmetic(a, b, '%')
