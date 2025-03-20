s = "if the user doesn't provide one of these, a default is assumed"

tmp = 0
prev = 0
list = []

while( tmp != -1 ) :

    tmp = s.find('t',prev)

    if tmp != -1 :
        list.append(tmp)
        prev = tmp + 1

print(list)

