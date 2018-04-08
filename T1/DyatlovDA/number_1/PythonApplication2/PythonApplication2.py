print(" *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 1                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n")
a = []
x = 0
n = int(input("enter n:"))
for i in range(n):
	a.append(int(input()))
for i in range(n):
	for j in range(n-i-1):
		if (a[i] == a[j+i+1]):
			x = 1
			break
	if (x == 1):
		break
if (x == 1):
	print("ne ynikal")
if (x == 0):
	print("ynikal")
	
