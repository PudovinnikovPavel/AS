k = input()
 
i = 0
while k[i] == ' ': i+=1
k = k[i:]
 
i = len(k)
while k[i-1] == ' ': i-=1
k = k[:i]
 
k1 = k[0]
i = 1
while i < len(k):
	if k[i] != ' ':
		k1 += k[i]
	elif k[i-1] != ' ':
		k1 += '*'
	i += 1
print(k1)
