
# coding: utf-8

# In[1]:


def is_prime(N):
    if N == 1:
        return False
    for x in range(2, N):
        if N % x == 0:            
            return False
        else:
            
            if x == N - 1:
                return True
print ("Введте число от 0 до 1000: ")
P = int(input())
is_prime(P)

