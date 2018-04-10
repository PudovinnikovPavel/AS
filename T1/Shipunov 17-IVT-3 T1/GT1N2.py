
# coding: utf-8

# In[2]:


#task №1
#__№2
#
#17-IVT-3
#Shipunov 
#
#

def qucumber (li):
    max = li[1]
    for i in range (1, len(li)):
        if li[i] > max:
            max = li[i]
    for i in range (len (li)):
        li[i] = li[i] / max
        print (li[i])
    print ("______________")

    
    
c1 = [1, 3, 4, 5, 1 , 10]
c2 = [42, 47, 21, 34, 67, 111, 340]
qucumber(c1)
qucumber(c2)

