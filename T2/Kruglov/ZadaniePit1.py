def is_prime(n):
    i = 2
    while (i*i) <= n:
        if (n % i) == 0:
            return False
        i = i + 1
    return True

print "0-1000"
d = int(input())
if is_prime(d) == True:
    print "Simple"
else:
    print "Not simple"
