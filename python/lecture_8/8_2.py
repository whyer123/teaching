file = open( "i" , "r" )

content = file.read()

print(content)

list = content.split()

a = int(list[0])
b = int(list[1])

c = a+b

file2 = open( "o2" , "w" )

file2.write(c)

file.close()
file2.close()


