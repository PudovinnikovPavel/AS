#!/usr/bin/python

A=input("enter the number - ")
B=0
while (A!=0) :
	C=A%10
	B=B*10+C
	A//=10
print B
