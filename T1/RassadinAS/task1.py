#!/usr/bin/python

arr=raw_input("enter the string - ")
arr = map(int,arr.split())
flag=0
for i in range(len(arr)) :
	for j in range(i+1,len(arr)) :
		if arr[i]==arr[j] : 
			flag=1
			continue
if flag==1 : print "There are not unique numbers"
else : print "All numbers are unique"
