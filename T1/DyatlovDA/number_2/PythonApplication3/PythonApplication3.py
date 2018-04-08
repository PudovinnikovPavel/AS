print(" *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 2                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n")
a = []
b = []
x = 0
n = int(input("enter n:"))
for i in range(n):
	a.append(int(input()))
k = int(input("enter k:"))
for i in range(k):
	b.append(int(input()))
max_a = a[0]
max_b = b[0]
for i in range(1,n):
    if (a[i]>max_a):
        max_a = a[i]
for i in range(1,k):
    if (b[i]>max_b):
        max_b = b[i]
for i in range(n):
    a[i] = a[i]/max_a
for i in range(k):
    b[i] = b[i]/max_b
print(a, "\n", b)
