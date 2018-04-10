def is_prime(x):
    k = 0
    for i in range(2,x-1):
        if ((x % i) == 0):
            k = 1
            break

    if(k == 1):
        print("false\n")
    else:
        print("true\n")
a = int(input("enter numb:"))
is_prime(a)
