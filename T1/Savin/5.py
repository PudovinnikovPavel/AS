D = input("Entered string:")
C = list (str(D))
while C[0]==' ':
    C.remove(' ')
C.reverse()
while C[0]==' ':
    C.remove(' ')
C.reverse()
R=1
print(C[0], end='')
while R!=len(C):
    if C[R]==' ' and C[R-1]==' ':
        print(end==' ')
    elif C[R]==' ':
        print('*',end=' ')
    else:
        print(C[R],end=' ')
    R=R+1