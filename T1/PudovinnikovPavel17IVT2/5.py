print("Введите строку: ")
s = input()
n = len(s)
s = s.strip()
i = s.find(' ')
while (i != -1):
    if s[i - 1]=='*':
        s = s[:i] + s[i + 1:]
    else:
        s = s[:i] + '*' + s[i+1:]
    i = s.find(' ')
print(s)