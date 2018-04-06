#!/usr/bin/python


print "enter D -",
D=input()
print "enter h -",
h=input()
print "enter S -",
S=input()
square=3.14159/2*D*D
N=square//S
if square%S!=0 : N+=1
print "%d" % N
