
# coding: utf-8

# In[23]:


#task №1
#__№4
#
#17-IVT-3
#Shipunov 
#

def intospace (q):
    k = 0
    qq = q.strip()
    for i in range(len (qq)):
        
        if qq[i] == " " and k == 1:
            continue
        if qq[i] == " " and k == 0:
            print("*", end='')
            k = 1
            continue
        k = 0
        
        print(qq[i], end='')
   

                
qus = '     _im pickle   rick '
intospace (qus)

