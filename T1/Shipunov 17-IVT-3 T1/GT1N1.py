
# coding: utf-8

# In[7]:


#task №1
#__№1
#
#17-IVT-3
#Shipunov 
#
#
cpis = [1, 2, 3, 4, 5]
k = 0
for i in range(len (cpis)):
    for j in range(i, len (cpis)):
        if cpis[i] == cpis[j] and i != j:
            print("Элементы в списке повторяются")
            k = 1
            break
    
    if k == 1:
        break
        
if k == 0:
    print("Повторений не было найдено")
        
    

