K = int(input("How much:"))
for R in range(K):
    print()
    G = input("list:").split()
    MAXIMUM = int (max(G));
    for T in G:
        print('%.2f' %float(int(T)/MAXIMUM), end=" ")