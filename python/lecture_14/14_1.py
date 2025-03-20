import random

list_check = [0]*1000 

for i in range(3) :

    list = []
    for j in range(6) :
        while True :
            n = random.randint(0,999)
            if n % 2 == 0 :
                continue
            if list_check[n] == 1 : #確保沒有重複
                continue
            list.append(n)
            list_check[n] = 1
            break
    print(list)

        
