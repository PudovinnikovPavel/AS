def bubblesort(arr):
    f = 1
    while f < len(li):
        for k in range(len(li)-f):
            if li[k] > li[k+1]:
                li[k],li[k+1] = li[k+1],li[k]
        f += 1

li = [1, 2,5,6,3,7,3,78,66,443,12]  
a = bubblesort(li)
print(li)
        

