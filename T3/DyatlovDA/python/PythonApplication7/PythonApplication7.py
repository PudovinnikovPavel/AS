import random
import time
def sort(array):
    i = 1
    while i < len(array):
        j = 0
        while j < len(array) - i:
            if array[j] > array[j+1]:
                t = array[j]
                array[j] = array[j+1]
                array[j+1] = t
            j = j + 1
        i = i + 1
def test(size):
    arr = []
    for i in range(size):
        arr.append(random.randint(1,size))
    start_time = time.time()
    sort(arr)
    print(time.time() - start_time)
print(" *************************************************************************** \n"
		"|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
		"|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
		"|*| **  *****  **    **    |*|Study work number 1                         |*|\n"
		"|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
		"|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
		" *************************************************************************** \n")
n = int(input("enter n:"))
test(n)
