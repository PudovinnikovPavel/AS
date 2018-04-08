print(" *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 4                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n")
str = input("enter the str: ")
str = str.split()
list = ""
for i in range(len(str)):
	list+=str[i]+"*"
list = list[0:len(list)-1]
print ("amended str:", list)