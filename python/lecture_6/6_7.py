s = "if the user doesn't provide one of these, a default is assumed"

list = []

a = s.find('t')

list.append(a)

b = s.find('t',a+1)

list.append(b)

print(list)







