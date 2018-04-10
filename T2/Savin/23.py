#Program №3 (Python)
el = input().split()
k=0
while k<len(el):
    if int(el[k])<0:
        el.pop(k)
    else:
        k=k+1
print(el)
res=int(el[0])*int(el[2])*int(el[5])
print (res)

