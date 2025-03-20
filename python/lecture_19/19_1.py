lst = []
line_size = 0
while True :
    try :
        line = input()
        lst.append(line)
        line_size = max( line_size , len(line) )

    except :
        break

for i in range(line_size) :
    for j in range(len(lst)-1,-1,-1) :
        try:
            print(lst[j][i], sep='', end='')

        except:
            print(" ", sep='', end='')
    print()