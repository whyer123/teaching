my_dict = {}
s = input()

sumx = sum([my_dict[i] for i in s if i in my_dict])

sumx = 0
for i in s:
    if i in my_dict:
        sumx += my_dict[i]