#Program №1(Python)
def is_prime(chislo):
    if chislo > 1:
        for item in range(2, chislo):
            if chislo != item and chislo % item == 0:
                return False
        return True
    else:
        return False
chislo = int(input("Vvedite chislo: "))
a = is_prime(chislo)
print(a)



