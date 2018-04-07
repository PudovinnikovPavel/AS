
# coding: utf-8

# In[20]:


def ft (a):
    j = 0
    pr=1
    for i in range(len(a)):
        if a[i]>0:
            j=j+1
        if (((j == 1) or (j==3) or (j == 6)) and (a[i]>0)):
            pr=pr*a[i]
                   
    return pr
a= [1,2,-3,4,5,6,10]
ft(a)

