import random
n = [round(random.random() * 100) - 50 for i in range(20)]
print(n)
 
i = j = 0
i1 = i3 = i6 = -1
while i < 20:

	if n[i] > 0:
		if j == 1:
			i1 = i
		elif j == 3:
			i3 = i
		elif j == 6:
			i6 = i
			break
		j += 1
	i += 1
 
if i6 > 0:
        F= n[i1] * n[i3] * n[i6]
        print("%d * %d * %d = %d" % (n[i1], n[i3], n[i6], F))
